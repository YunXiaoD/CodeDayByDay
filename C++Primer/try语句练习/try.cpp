#include<iostream>
using namespace std;

int main(void)
{
	/*for (int i, j; cout << "Input two integers:\n", cin >> i >> j; )
	{
		try
		{
			if (j == 0)
				throw runtime_error("divisor is 0");
			cout << i / j << endl;
		}
		catch (runtime_error err)
		{
			cout << err.what() << "\nTry again? Enter y or n" << endl;
			char c;
			cin >> c;
			if (!cin || c == 'n')
				break;
		}
	}*/

	//Ææ¹ÖµÄ±¨´í
	int a = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> a;
		cout << a << endl;
	}
	system("pause");
	return 0;
}