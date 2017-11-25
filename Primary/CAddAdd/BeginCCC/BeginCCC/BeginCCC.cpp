// BeginCCC.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

using namespace std;
int main()
{
	int sum = 0;
	for (int i = -100; i <= 100; i++)
		sum += i;
	cout << sum;
	system("pause");
    return 0;
}

