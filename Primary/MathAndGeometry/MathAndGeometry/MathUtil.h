#pragma once
#ifndef __MATHUTIL_H_INCLUDE__
#define __MATHUTIL_H_INCLUDE__

#include <math.h>

//һЩPI����
const float kPi = 3.14159265f;
const float k2Pi = kPi * 2.0f;
const float kPiOver2 = kPi / 2.0f;
const float k1OverPi = 1.0f / kPi;
const float k1Over2Pi = 1.0f / k2Pi;
//���Ƕ�������-Pi��Pi֮��
extern float warpPi(float thera);
//��ȫ�ķ����Ǻ���
extern float safeAcos(float x);
//����Ƕȵ�sin��cos
inline void sinCos(float *returnSin, float *returnCos, float thera) {
	*returnSin = sin(thera);
	*returnCos = cos(thera);
}

#endif // ! __MATHUTIL_H_INCLUDE__

