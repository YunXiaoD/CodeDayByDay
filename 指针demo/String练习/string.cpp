//练习string，读文件可以使用getline
#include<iostream>
using namespace std;
#include<string>

void main() {
	//1.根据输入按照空格分割，逐行输出
	//string word;
	//while (cin >> word)
	/*	if (word=="exit")
		{
			break;
		}*/
	//	cout << word << endl;
	//2.读文件时可以使用getline， 保留文本的空格信息
	string word;
	while (getline(cin, word))
	{
		if (word=="exit")
		{
			break;
		}
		cout << word << endl;
	}
	//3.string的empty函数与size函数
	/*string word;
	while (getline(cin, word))
	{
		if (!word.empty())
			cout << word << endl;
		else
			break;
		if (word.size() > 8)
			break;
	}*/
	//4.将字符串转换为大写输出,使用引用修改字符串的值，使用标准库函数toupper修改为大写
	string line("Hello Hello");
	for (auto &c : line)
	{
		c = toupper(c);
	}
	cout << line << endl;
	system("pause");

}