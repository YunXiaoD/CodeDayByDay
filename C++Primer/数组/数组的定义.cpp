#include<iostream>;
using namespace std;

int c[5];
void main() {
//����Ķ���Ӧ��Ϊ����
//�ַ�����Ӧ�����հ׷�λ��
	int a = 5;
	//int arr[a]; //��������ᱨ��Ӧ��Ϊ���·�ʽ��
	const int b = 5;
	int arr[b];
//����ַ�����
	//char arr3[4] = "abcd"; //����û��Ԥ���հ׷�λ��
	char arr4[5] = "abcd";
//�����ָ��������
	int *ptrs[10]; //ptrs�Ǻ���10������ָ�������
	//int &refs[10]; // ���󣺲��������õ�����
	int(*Parray)[10]; // Parrayָ��һ������10������������
	int(&arrRef)[5] = arr; // arrRef����һ������10������������

}
