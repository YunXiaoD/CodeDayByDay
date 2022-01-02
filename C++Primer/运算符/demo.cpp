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
	////位运算判定奇数偶数
	//while (true) {
	//	int i;
	//	cout << "请输入一个整数" << endl;
	//	cin >>i;
	//	cout << (i & 0x1) << endl;  
	//}
	//C++的前++与后++验证

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

	//结论：C++for循环中的前++与后++没区别
	//int i = 0;
	//int j = ++i;
	//cout << j << endl;
	//system("pause");

	//编写一段程序，使用条件运算符从vector<int>中找到哪些元素的值是奇数，然后将这些奇数值翻倍
	//vector <int> v1 = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//JudgeJO(v1);
	//system("pause");

	int x[10];   int *p = x;
	cout << sizeof(x) / sizeof(*x) << endl; //10
	cout << sizeof(p) / sizeof(*p) << endl;
	system("pause");

}
