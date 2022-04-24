#include<iostream>
#include "Chapter.h"
using namespace std;
void reset(int * p) {
	cout << "传入的值为："<< *p << endl;
	cout << "传入的地址为：" << p << endl;
	*p = 0; //修改值
	p = 0; //修改地址
	cout << "修改后的地址为：" << p << endl;
}
int main() {
	int a = 10;
	cout << "a的原地址为：" << &a << endl;
	reset(&a);
	cout << "a的值为：" << a <<endl;
	cout << "a的现地址为：" << &a << endl;
	system("pause");
	return 0;
}

//指针的形参传递，函数体内部修改指针形参的值与地址。修改形参值会改变实参的值，修改形参地址不会改变实参的地址