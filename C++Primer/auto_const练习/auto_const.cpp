#include<iostream>
#include<typeinfo>
using namespace std;
void main() {
	const int i = 42;
	auto j = i;
	const auto &k = i;
	auto *p = &i;
	const auto j2 = i, &k2 = i;
	cout <<"auto j=i ������Ϊ��" << typeid(j).name()<<endl;
	cout << "auto j=i ��ֵΪ��" << j << endl;
	system("pause");
}