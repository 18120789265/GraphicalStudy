// BeginCCC.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "stdafx.h"
#include <math.h>
using namespace std;

void test3(int *a);
void test(int &a);
void test2();
void print(intptr_t i);

struct MyStruct {
	int a = 10;
	string name;
};
MyStruct hehe, heihei, *haha;//ֱ������3��MyStruct���͵ı���

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
	//int a = 1;
	//int *b = &a;
	//int &c = *b;//== int *&c = b;
	//cout << *b;
	//int a = 1;
	//int* const b = &a;
	//int c = 2;
	////*b = c;
	//cout << b << endl;
	//cout << *b << endl;
	//int *d = &a;
	//d = &c;
	//int a = 1;
	//int *b = &a;//��ʱb��ֵΪa�ĵ�ַ��*bΪa��ֵ
	////b = 5;    //���ܽ�int��ֵ��int*
	//*b = 6;     //a��ֵ���ı���
	//cout << b << endl;
	//cout << *b << endl;
	//int c = 2;
	////b = &c;//b��ָ��c
	//*b = c;//a��ֵ���޸ĳ�c = 2
	//*b = 3;
	//cout << b << endl;
	//cout << *b << endl;
	//cout << c << endl;
	//constexper�������ʽ
	//constexpr int a = 10;//a��һ������
	//constexpr int a = test3();//ֻ�е�test3������constexper����ʱa����һ������
	//int null = 0, *p = &null;
	//���ͱ���
	//typedef int stone;//Ϊintȡ����stone
	//stone a = 10;//aʵ����int����
	//typedef int* stone2;//Ҳ����Ϊָ������ȡ����
	//stone2 b = &a;//
	//using stone = int;//�ڶ���ȡ�����ķ�ʽ
	//using stone2 = int*;
	//auto����˵����
	//int a = 1;
	//auto b = a;//�Զ�ʶ��bΪint
	//char c = '1';
	//auto d = c;//�Զ�ʶ��dΪchar
	//int a = 1;//int
	//const auto &b = a;//const int
	//auto *c = &a;//int*
	//const int d = a;//const int
	//decltype����ָʾ��
	//int a = 1;
	//decltype(a) b = 2;//������ʱ��a������ȥ��ʼ��b
	MyStruct a;
	a.a = 1;
	a.name = "stone";
	cout << hehe.a << endl;
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



