#include <assert.h>
#include <math.h>

#include "Quaternion.h"
#include "MathUtil.h"
#include "Vector3.h"
#include "EulerAngle.h"

const Quaternion kQuaternionIdentity = { 1.0f,1.0f,1.0f,1.0f };

//构造绕X轴旋转的四元数
void Quaternion::setToRotateAboutX(float theta) {
	float thetaOver2 = theta * .5f;

	w = cos(thetaOver2);
	x = sin(thetaOver2);
	y = 0.0f;
	z = 0.0f;
}
//构造绕Y轴旋转的四元数
void Quaternion::setToRotateAboutY(float theta) {
	float thetaOver2 = theta * .5f;

	w = cos(thetaOver2);
	x = 0.0f;
	y = sin(thetaOver2);
	z = 0.0f;
}
//构造绕Z轴旋转的四元数
void Quaternion::setToRotateAboutZ(float theta) {
	float thetaOver2 = theta * .5f;

	w = cos(thetaOver2);
	x = 0.0f;
	y = 0.0f;
	z = sin(thetaOver2);
}
//构造绕指定轴旋转的四元数
void Quaternion::setToRotateAboutAxis(const Vector3 &axis, float theta) {
	//旋转轴标准化
	assert(fabs(vectorMag(axis) - 1.0f) < .01f);

	float thetaOver2 = theta * .5f;
	float sinThetaOver2 = sin(thetaOver2);

	w = cos(thetaOver2);
	x = axis.x * sinThetaOver2;
	y = axis.y * sinThetaOver2;
	z = axis.z * sinThetaOver2;
}

void Quaternion::setToRotateObjectToInertial(const EulerAngle &orientation) {
	float sp, sb, sh;
	float cp, cb, ch;

	sinCos(&sp, &cp, orientation.pitch * 0.5f);
	sinCos(&sb, &cb, orientation.bank * 0.5f);
	sinCos(&sh, &ch, orientation.heading * 0.5f);

	w = ch*cp*cb + sh*sp*sb;
	x = ch*sp*cb + sh*cp*sb;
	y = -ch*sp*sb + sh*cp*cb;
	z = -sh*sp*cb + ch*cp*sb;
}

void Quaternion::setToRotateInertialToObject(const EulerAngle &orientation) {
	float sp, sb, sh;
	float cp, cb, ch;

	sinCos(&sp, &cp, orientation.pitch * 0.5f);
	sinCos(&sb, &cb, orientation.bank * 0.5f);
	sinCos(&sh, &ch, orientation.heading * 0.5f);

	w = ch*cp*cb + sh*sp*sb;
	x = -ch*sp*cb - sh*cp*sb;
	y = ch*sp*sb - sh*cp*cb;
	z = sh*sp*cb - ch*cp*sb;
}

Quaternion Quaternion::operator*(const Quaternion &a) const {
	Quaternion result;

	result.w = w*a.w - x*a.x - y*a.y - z*a.z;
	result.x = w*a.x + x*a.w + z*a.y + y*a.z;
	result.y = w*a.y + y*a.w + x*a.z - z*a.x;
	result.z = w*a.z + z*a.w + y*a.x - x*a.y;

	return result;
}

Quaternion &Quaternion::operator*= (const Quaternion &a) {
	*this = *this * a;
	return *this;
}

void Quaternion::normalize() {
	float mag = (float)sqrt(w*w + x*x + y*y + z*z);

	if (mag > 0.0f) {
		float oneOverMag = 1.0f / mag;
		w *= oneOverMag;
		x *= oneOverMag;
		y *= oneOverMag;
		z *= oneOverMag;
	}
	else {
		assert(false);

		identity();
	}
}

float Quaternion::getRotationAngle()const {
	float theraOver2 = safeAcos(w);
	return theraOver2 * 2.0f;
}

Quaternion slerp(const Quaternion &q0, const Quaternion &q1, float t) {
	if (t <= 0.0f) return q0;
	if (t >= 1.0f) return q1;

	float cosOmega = dotProduct(q0, q1);

	float q1w = q1.w;
	float q1x = q1.x;
	float q1y = q1.y;
	float q1z = q1.z;

	if (cosOmega < 0.0f) {
		q1w = -q1w;
		q1x = -q1x;
		q1y = -q1y;
		q1z = -q1z;
		cosOmega = -cosOmega;
	}

	assert(cosOmega < 1.1f);

	float k0, k1;
	if (cosOmega > 0.9999f) {
		k0 = 1.0f - t;
		k1 = t;
	}
	else {
		float sinOmega = sqrt(1.0f - cosOmega*cosOmega);

		float omega = atan2(sinOmega, cosOmega);

		float oneOverSimOmega = 1.0f / sinOmega;

		k0 = sin((1.0f - t) * omega) * oneOverSimOmega;
		k1 = sin(t * omega) * oneOverSimOmega;
	}

	Quaternion result;
	result.x = k0*q0.x + k1*q1.x;
	result.y = k0*q0.y + k1*q1.y;
	result.z = k0*q0.z + k1*q1.z;
	result.w = k0*q0.w + k1*q1.w;
	
	return result;
}