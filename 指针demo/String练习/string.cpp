//��ϰstring�����ļ�����ʹ��getline
#include<iostream>
using namespace std;
#include<string>

void main() {
	//1.�������밴�տո�ָ�������
	//string word;
	//while (cin >> word)
	/*	if (word=="exit")
		{
			break;
		}*/
	//	cout << word << endl;
	//2.���ļ�ʱ����ʹ��getline�� �����ı��Ŀո���Ϣ
	string word;
	while (getline(cin, word))
	{
		if (word=="exit")
		{
			break;
		}
		cout << word << endl;
	}
	//3.string��empty������size����
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
	//4.���ַ���ת��Ϊ��д���,ʹ�������޸��ַ�����ֵ��ʹ�ñ�׼�⺯��toupper�޸�Ϊ��д
	string line("Hello Hello");
	for (auto &c : line)
	{
		c = toupper(c);
	}
	cout << line << endl;
	system("pause");

}