#include<iostream>
#include "Chapter.h"
using namespace std;
void reset(int * p) {
	cout << "�����ֵΪ��"<< *p << endl;
	cout << "����ĵ�ַΪ��" << p << endl;
	*p = 0; //�޸�ֵ
	p = 0; //�޸ĵ�ַ
	cout << "�޸ĺ�ĵ�ַΪ��" << p << endl;
}
int main() {
	int a = 10;
	cout << "a��ԭ��ַΪ��" << &a << endl;
	reset(&a);
	cout << "a��ֵΪ��" << a <<endl;
	cout << "a���ֵ�ַΪ��" << &a << endl;
	system("pause");
	return 0;
}

//ָ����βδ��ݣ��������ڲ��޸�ָ���βε�ֵ���ַ���޸��β�ֵ��ı�ʵ�ε�ֵ���޸��βε�ַ����ı�ʵ�εĵ�ַ