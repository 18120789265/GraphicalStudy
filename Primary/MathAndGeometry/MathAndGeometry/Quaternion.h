#pragma once
#ifndef __QUATERNION_H_INCLUDE__
#define __QUATERNION_H_INCLUDE__

class Vector3;
class EulerAngle;

class Quaternion {
public:
	float w, x, y, z;
	
	void identity() { w = 1.0f; x = y = z = 0.0f; }

	//����ִ����ת����Ԫ��
	void setToRotateAboutX(float theta);
	void setToRotateAboutY(float theta);
	void setToRotateAboutZ(float theta);
	void setToRotateAboutAxis(const Vector3 &axis, float theta);

	//����ִ������-������ת����Ԫ��
	void setToRotateObjectToInertial(const EulerAngle &orientation);
	void setToRotateInertialToObject(const EulerAngle &orientation);

	//����
	Quaternion operator *(const Quaternion &a) const;
	Quaternion &operator *=(const Quaternion &a);

	//����
	void normalize();

	//��ȡ��ת�Ǻ���ת��
	float getRotationAngle() const;
	float getRotationAxis() const;
};

//ȫ�� ��λ ��Ԫ��
extern const Quaternion kQuaternionIdentity;
//��Ԫ�����
extern float dotProduct(const Quaternion &a, const Quaternion &b);
//�������Բ�ֵ
extern Quaternion slerp(const Quaternion &a, const Quaternion &b);
//��Ԫ������
extern Quaternion conjugate(const Quaternion &q);
//��Ԫ����
extern Quaternion pow(const Quaternion &q, float exponet);

#endif // !__QUATERNION_H_INCLUDE__
