//练习文件流，习题8.4
#include<fstream>
#include<iostream>
using namespace std;
#include<string>
#include<vector>

void ReadFileToVec(const string filename, vector <string> vec) {
	ifstream ifs(filename);
	if(ifs) {
		string buf;
		while (std::getline(ifs, buf))
		{
			vec.push_back(buf);
		}
	}
	
}

int main() {
	vector <string> vec;
	string filename = "../Dyx.txt";
	ReadFileToVec(filename, vec);
	for (auto str : vec) {
		cout << str << endl;
	}
	system("pause");
	return 0;
}