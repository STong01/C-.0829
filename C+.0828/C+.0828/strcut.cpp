#include <iostream>
using namespace std;

//struct A1{
//	int a;
//	double b;//向最大元素对齐，所以说结构体的大小为16；
//};
//
//struct A2{
//	A1 a;
//	char b;//最大元素是double，所以说结构体大小是24；
//};
//
//struct A3{
//	int a;
//	double b;
//	char c;//结构体大小是24；
//};

struct A3{
	int a;
	double b;
	char c;//结构体大小是24；

	void printA(){//成员函数中可以直接使用自己的成员变量
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