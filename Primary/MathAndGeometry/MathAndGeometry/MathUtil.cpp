#include <math.h>

#include "MathUtil.h"
#include "Vector3.h"

const Vector3 kZeroVector(0.0f, 0.0f, 0.0f);
//���Ƕ�������-Pi��Pi֮��
float warpPi(float thera) {
	thera += kPi;
	thera -= floor(thera * k1Over2Pi) * k2Pi;
	thera -= kPi;
	return thera;
}
//��ȫ�ķ����Ǻ���
float safeAcos(float x) {
	if (x < -1.0f) {
		return kPi;
	}
	if (x >= 1.0f) {
		return 0.0f;
	}
	return acos(x);
}

