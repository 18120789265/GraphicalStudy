#pragma once
#ifndef __QUATERNION_H_INCLUDE__
#define __QUATERNION_H_INCLUDE__

class Vector3;
class EulerAngle;

class Quaternion {
public:
	float w, x, y, z;
	
	void identity() { w = 1.0f; x = y = z = 0.0f; }

	//构造执行旋转的四元数
	void setToRotateAboutX(float theta);
	void setToRotateAboutY(float theta);
	void setToRotateAboutZ(float theta);
	void setToRotateAboutAxis(const Vector3 &axis, float theta);

	//构造执行物体-惯性旋转的四元数
	void setToRotateObjectToInertial(const EulerAngle &orientation);
	void setToRotateInertialToObject(const EulerAngle &orientation);

	//重载
	Quaternion operator *(const Quaternion &a) const;
	Quaternion &operator *=(const Quaternion &a);

	//正则化
	void normalize();

	//提取旋转角和旋转轴
	float getRotationAngle() const;
	float getRotationAxis() const;
};

//全局 单位 四元数
extern const Quaternion kQuaternionIdentity;
//四元数点乘
extern float dotProduct(const Quaternion &a, const Quaternion &b);
//球面线性插值
extern Quaternion slerp(const Quaternion &a, const Quaternion &b);
//四元数共轭
extern Quaternion conjugate(const Quaternion &q);
//四元数幂
extern Quaternion pow(const Quaternion &q, float exponet);

#endif // !__QUATERNION_H_INCLUDE__
