#include <math.h>

#include "MathUtil.h"
#include "Vector3.h"

const Vector3 kZeroVector(0.0f, 0.0f, 0.0f);
//将角度限制在-Pi和Pi之间
float warpPi(float thera) {
	thera += kPi;
	thera -= floor(thera * k1Over2Pi) * k2Pi;
	thera -= kPi;
	return thera;
}
//安全的反三角函数
float safeAcos(float x) {
	if (x < -1.0f) {
		return kPi;
	}
	if (x >= 1.0f) {
		return 0.0f;
	}
	return acos(x);
}

