// MathAndGeometry.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Vector3.h"
#include <iostream> 

int main()
{
	Vector3 v1;
	v1.x = 1;
	v1.y = 2;
	v1.z = 3;
	v1.normalize();
	printf("%f", v1.z);
	getchar();
    return 0;
}
