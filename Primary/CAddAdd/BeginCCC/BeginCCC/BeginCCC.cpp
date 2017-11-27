// BeginCCC.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <math.h>
using namespace std;

void test2();
void print(intptr_t i);

int main()
{
	test2();
	system("pause");
    return 0;
}
//第二章
void test2() {
	/*int i = 10;
	long j = i;
	cout << j << endl;*/
	//有符号类型
	//cout << sizeof(int) << endl;//4(4*8=32位)
	//cout << sizeof(long) << endl;//4
	//cout << sizeof(char) << endl;//1
	//cout << sizeof(wchar_t) << endl;//2
	//cout << sizeof(float) << endl;//4
	//cout << sizeof(double) << endl;//8
	////无符号类型
	//cout << sizeof(unsigned int) << endl;//4
	//char可以相加，最终输出的值为4代表的asic
	/*char c1 = '1';
	char c2 = '3';
	char c3 = c1 + c2;
	cout << c3 << endl;*/
	//类型转换
	//int i = 2;
	//unsigned char i = -1;//输出255,char表示0-255的区间，如果赋值为区间外的值，实际结果为
	////该值对256取模后的余数
	//unsigned char i2 = .1;//输出255
	//print(i);
	//unsigned u1 = 10, u2 = 42;
	//cout << u2 - u1 << endl;
	//cout << u1 - u2 << endl;//无符号数不能为负,结果为2^32 - 32
	/*cout << "2M" << endl;
	cout << "2\tM\n";*/
	//变量
	string book("this is a book");
	//cout << book << endl;
}

//带换行的输出
void print(intptr_t i) {
	cout << i << endl;
}



