#include <iostream>
using namespace std;

//struct A1{
//	int a;
//	double b;//�����Ԫ�ض��룬����˵�ṹ��Ĵ�СΪ16��
//};
//
//struct A2{
//	A1 a;
//	char b;//���Ԫ����double������˵�ṹ���С��24��
//};
//
//struct A3{
//	int a;
//	double b;
//	char c;//�ṹ���С��24��
//};

struct A3{
	int a;
	double b;
	char c;//�ṹ���С��24��

	void printA(){//��Ա�����п���ֱ��ʹ���Լ��ĳ�Ա����
		printf("%d\n", a);
	}

	void printB();
};

void A3::printB(){
	printf("%2.2f\n", b);
}

//namespace n1{
//	int a;
//	int printA(){
//		printf("%d\n", a);
//	}
//}

int main1(){

	/*printf("%d,%d,%d\n", sizeof(A1), sizeof(A2), sizeof(A3));*/
	//A3 test;
	//printf("%p %p %p\n", &test.a, &test.b, &test.c);

	A3 test;
	test.a = 5;
	test.printA();
	test.b = 8.23;
	test.printB();
	printf("%d\n",sizeof(A3));


	system("pause");
	return 0;
}