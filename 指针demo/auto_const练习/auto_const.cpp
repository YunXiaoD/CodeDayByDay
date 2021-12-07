#include<iostream>
#include<typeinfo>
using namespace std;
void main() {
	const int i = 42;
	auto j = i;
	const auto &k = i;
	auto *p = &i;
	const auto j2 = i, &k2 = i;
	cout <<"auto j=i 的类型为：" << typeid(j).name()<<endl;
	cout << "auto j=i 的值为：" << j << endl;
	system("pause");
}