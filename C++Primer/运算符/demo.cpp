#include<iostream>
#include<vector>
using namespace std;

void JudgeJO(vector <int> v1) {
	auto beg = v1.begin(); 
	auto end = v1.end();
	while (beg != end)
	{	
		if ((*beg & 0X1) == 1) {
			cout << *beg <<"aaa"<< endl;
			*beg = *beg * 2;
			cout << *beg << "bbb"<<endl;
		}
			
		//cout << (*beg & 0X1) == 0 << endl;
		++beg;

	}
}

void main() {
	////λ�����ж�����ż��
	//while (true) {
	//	int i;
	//	cout << "������һ������" << endl;
	//	cin >>i;
	//	cout << (i & 0x1) << endl;  
	//}
	//C++��ǰ++���++��֤

	//for (size_t i = 0; i < 5; i++)
	//{
	//	cout << i << endl;
	//	system("pause");
	//}
	//for (size_t i = 0; i < 5; ++i)
	//{
	//	cout << i << endl;
	//	system("pause");
	//}

	//���ۣ�C++forѭ���е�ǰ++���++û����
	//int i = 0;
	//int j = ++i;
	//cout << j << endl;
	//system("pause");

	//��дһ�γ���ʹ�������������vector<int>���ҵ���ЩԪ�ص�ֵ��������Ȼ����Щ����ֵ����
	//vector <int> v1 = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//JudgeJO(v1);
	//system("pause");

	int x[10];   int *p = x;
	cout << sizeof(x) / sizeof(*x) << endl; //10
	cout << sizeof(p) / sizeof(*p) << endl;
	system("pause");

}
