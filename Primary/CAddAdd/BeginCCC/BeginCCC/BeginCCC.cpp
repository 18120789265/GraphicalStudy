// BeginCCC.cpp : �������̨Ӧ�ó������ڵ㡣
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
//�ڶ���
void test2() {
	/*int i = 10;
	long j = i;
	cout << j << endl;*/
	//�з�������
	//cout << sizeof(int) << endl;//4(4*8=32λ)
	//cout << sizeof(long) << endl;//4
	//cout << sizeof(char) << endl;//1
	//cout << sizeof(wchar_t) << endl;//2
	//cout << sizeof(float) << endl;//4
	//cout << sizeof(double) << endl;//8
	////�޷�������
	//cout << sizeof(unsigned int) << endl;//4
	//char������ӣ����������ֵΪ4�����asic
	/*char c1 = '1';
	char c2 = '3';
	char c3 = c1 + c2;
	cout << c3 << endl;*/
	//����ת��
	//int i = 2;
	//unsigned char i = -1;//���255,char��ʾ0-255�����䣬�����ֵΪ�������ֵ��ʵ�ʽ��Ϊ
	////��ֵ��256ȡģ�������
	//unsigned char i2 = .1;//���255
	//print(i);
	//unsigned u1 = 10, u2 = 42;
	//cout << u2 - u1 << endl;
	//cout << u1 - u2 << endl;//�޷���������Ϊ��,���Ϊ2^32 - 32
	/*cout << "2M" << endl;
	cout << "2\tM\n";*/
	//����
	string book("this is a book");
	//cout << book << endl;
}

//�����е����
void print(intptr_t i) {
	cout << i << endl;
}



