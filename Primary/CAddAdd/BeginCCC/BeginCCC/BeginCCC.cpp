// BeginCCC.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "stdafx.h"
#include <math.h>
using namespace std;

void test3(int *a);
void test(int &a);
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
	//string book("this is a book");
	//cout << book << endl;
	/*char v = u'1';
	cout << v << endl;*/
	/*int _ = 1;
	print(_);*/
	//���ã��ǵ�ָ�������,����һ�����������޸�
	//int a = 1;
	//int &b = a;//ָ��a�ĵ�ַ
	//b = 2;//a = 2
	//cout << a << endl;//�����a�ĵ�ַ
	//int &c = b;
	//c = 3;//a = 3
	//print(a);
	/*int a = 1;
	test(a);
	cout << a << endl;*/
	//ָ�룬ָ�뱾�����һ�����󣬿ɶ�ָ����п����޸�
	//int a = 1;
	//int b = 2;
	//int *c = &a;//��ʼ��ָ��C����ֵ
	//c = &b;//�ı�cָ���ֵ
	//cout << *c << endl;//���cָ���ֵ
	//cout << c << endl;//���c�ĵ�ַ
	//int &d = a;
	//c = &d;
	//cout << c << endl;//���a�ĵ�ַ
	/*cout << a << endl;
	test3(b);
	cout << a << endl;*/
	/*int a = 2;
	int *b = &a;
	*b = *b * *b;
	cout << a << endl;*/
	int a = 1;
	int *b = &a;
	int &c = *b;//== int *&c = b;
	cout << *b;
}

//���ô���
void test(int &a) {
	a = 3;
}
//ָ�봫��
void test3(int *a) {
	*a = 3;
}


//�����е����
void print(intptr_t i) {
	cout << i << endl;
}



