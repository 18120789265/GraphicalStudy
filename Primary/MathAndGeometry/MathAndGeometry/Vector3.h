#pragma once
#include "Math.h"

class Vector3 {
public:
	float x, y, z;

	Vector3() {}

	Vector3(const Vector3 &a) : x(a.x), y(a.y), z(a.z) {}

	Vector3(float nx, float ny, float nz) {
		x = nx;
		y = ny;
		z = nz;
	}

	#pragma region 重载各种运算符

	Vector3 &operator = (const Vector3 &a) {
		x = a.x; y = a.y; z = a.z;
		return *this;
	}

	bool operator ==(const Vector3 &a) const {
		return x == a.x && y == a.y && z == a.z;
	}

	bool operator !=(const Vector3 &a) const {
		return x != a.x || y != a.y || z != a.z;
	}

	void zero() { x = y = z = 0.0f; }

	Vector3 operator - () const { return Vector3(-z, -y, -z); }

	Vector3 operator +(const Vector3 &a) const {
		return Vector3(x + a.x, y + a.y, z + a.z);
	}

	Vector3 operator -(const Vector3 &a) const {
		return Vector3(x - a.x, y - a.y, z - a.z);
	}

	Vector3 operator *(float a) const {
		return Vector3(a * x, a * y, a * z);
	}

	float operator *(const Vector3 &a) const {
		return x * a.x + y * a.y + z * a.z;
	}

	Vector3 operator /(float a) const {
		float oneOverA = 1.0f / a;
		return Vector3(x*oneOverA, y*oneOverA, z*oneOverA);
	}

	Vector3 &operator += (const Vector3 &a) {
		x += a.x; y += a.y; z += a.z;
		return *this;
	}

	Vector3 &operator -= (const Vector3 &a) {
		x -= a.x; y -= a.y; z -= a.z;
		return *this;
	}

	Vector3 &operator *= (float a) {
		x *= a; y *= a; z *= a;
		return *this;
	}

	Vector3 &operator /= (float a) {
		float oneOverA = 1.0f / a;
		x *= oneOverA; y *= oneOverA; z *= oneOverA;
		return *this;
	}

	#pragma endregion

	//向量标准化
	void normalize() {
		float mahsq = x * x + y * y + z * z;
		if (mahsq > 0.0f) {
			float oneOverMag = 1.0f / sqrt(mahsq);
			x *= oneOverMag;
			y *= oneOverMag;
			z *= oneOverMag;
		}
	}
};
//取模
inline float vectorMag(const Vector3 &a) {
	return sqrt(a.x * a.x + a.y * a.y + a.z * a.z);
}

//计算叉乘
inline Vector3 crossProduct(const Vector3 &a, const Vector3 &b) {
	return Vector3(
		a.y*b.z - a.z*b.y,
		a.z*b.x - a.x*b.z,
		a.x*b.y - a.y*b.x
	);
}

//向量左乘
inline Vector3 operator *(float k, const Vector3 &a) {
	return Vector3(k*a.x, k*a.y, k*a.z);
}

//计算距离
inline float distance(const Vector3 &a, const Vector3 &b) {
	float xx = a.x - b.x;
	float yy = a.y - b.y;
	float zz = a.z - b.z;
	return sqrt(xx*xx + yy*yy + zz*zz);
}
//零向量
extern const Vector3 KZeroVector;

