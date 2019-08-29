#include <iostream>
using namespace std;

class ct{
	int a;
public:
	double b;
	char c;

	void changeA(int i){
		a = i;
	}

	void printA(){
		printf("%d\n", a);
	}

	void printB();
};

void ct::printB(){
	printf("%2.2f\n", b);
}

int main(){

	ct c;
	c.changeA(6);
	c.printA();

	system("pause");
	return 0;
}