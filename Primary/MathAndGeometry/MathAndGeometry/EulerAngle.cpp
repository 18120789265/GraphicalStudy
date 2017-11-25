#include <math.h>

#include "EulerAngle.h"
#include "Quaternion.h"
#include "Matrix4x3.h"
#include "RotationMatrix.h"
#include "MathUtil.h"

const EulerAngle kEulerAnglesIdentity(0.0f, 0.0f, 0.0f);

void EulerAngle::canonize() {
	pitch = warpPi(pitch);

	if (pitch < -kPiOver2) {
		pitch = -kPi - pitch;
		heading += kPi;
		bank += kPi;
	}
	else if (pitch > kPiOver2) {
		pitch = kPi - pitch;
		heading += kPi;
		bank += kPi;
	}

	if (fabs(pitch) > kPiOver2 - 1e-4)
	{
		heading += bank;
		bank = 0.0f;
	}
	else
	{
		bank = warpPi(bank);
	}

	heading = warpPi(heading);
}