#pragma once
#ifndef __EULERANGLE_H_INCLUDE__
#define __EULERANGLE_H_INCLUDE__

class Quaternion;
class Matrix4x3;
class RotationMatrix;

class EulerAngle {

public:
	float heading;
	float pitch;
	float bank;

	EulerAngle() {}

	EulerAngle(float h, float p, float b) :heading(h), pitch(p), bank(b);

	//置零
	void identity() { pitch = bank = heading = 0.0f; }
	//转变为限制集欧拉角
	void canonize();

	//从四元数到欧拉角
	//物体到惯性坐标系
	void fromObjectToInertialQuaternion(const Quaternion &q);
	//惯性到物体坐标系
	void fromInertialToObjectQuaternion(const Quaternion &q);

	//从矩阵到欧拉角
	void fromObjectToWorldMatrix(const Matrix4x3 &m);
	void fromWorldToObjectMatrix(const Matrix4x3 &m);

	//从旋转矩阵到欧拉角
	void fromRotationMatrix(const RotationMatrix &m);

};

extern const EulerAngle kEulerAnglesIdentity;

#endif // !__EULERANGLE_H_INCLUDE__

