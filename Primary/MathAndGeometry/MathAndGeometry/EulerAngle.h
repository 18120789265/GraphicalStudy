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

	//����
	void identity() { pitch = bank = heading = 0.0f; }
	//ת��Ϊ���Ƽ�ŷ����
	void canonize();

	//����Ԫ����ŷ����
	//���嵽��������ϵ
	void fromObjectToInertialQuaternion(const Quaternion &q);
	//���Ե���������ϵ
	void fromInertialToObjectQuaternion(const Quaternion &q);

	//�Ӿ���ŷ����
	void fromObjectToWorldMatrix(const Matrix4x3 &m);
	void fromWorldToObjectMatrix(const Matrix4x3 &m);

	//����ת����ŷ����
	void fromRotationMatrix(const RotationMatrix &m);

};

extern const EulerAngle kEulerAnglesIdentity;

#endif // !__EULERANGLE_H_INCLUDE__

