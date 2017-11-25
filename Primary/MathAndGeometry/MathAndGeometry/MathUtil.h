#pragma once
#ifndef __MATHUTIL_H_INCLUDE__
#define __MATHUTIL_H_INCLUDE__

#include <math.h>

//一些PI常量
const float kPi = 3.14159265f;
const float k2Pi = kPi * 2.0f;
const float kPiOver2 = kPi / 2.0f;
const float k1OverPi = 1.0f / kPi;
const float k1Over2Pi = 1.0f / k2Pi;
//将角度限制在-Pi和Pi之间
extern float warpPi(float thera);
//安全的反三角函数
extern float safeAcos(float x);
//计算角度的sin和cos
inline void sinCos(float *returnSin, float *returnCos, float thera) {
	*returnSin = sin(thera);
	*returnCos = cos(thera);
}

#endif // ! __MATHUTIL_H_INCLUDE__

