#include<iostream>
#include<vector>
using namespace std;

void testVector(vector <int> v1) {
	vector <int> v2(v1);
	cout << &v1 << endl;
	cout << &v2 << endl;
}

void binarySearch(vector <int> binV) {
	auto beg = binV.begin();
	auto end = binV.end();
	cout << (end - beg) << endl << (end - beg) / 2 << endl;
	auto middleAddr = binV.begin() + (end - beg)/2;
	cout << "请输入要查找的值" << endl;
	int inputVal;
	cin >> inputVal;
	while (middleAddr != end && * middleAddr != inputVal )
	{
		if (*middleAddr< inputVal)
		{
			beg = middleAddr+1;
		}
		else
		{
			end = middleAddr;
		}
		middleAddr = beg + (end - beg) / 2;
	}
	cout <<*middleAddr << endl;
}
void main() {
//定义一个vector容器
	//vector <int> v1;  //代表一个空vector，它的存储类型为int
	//vector <int> v2(v1); //v2中包含v1中所有元素的副本，测试一下v1，v2是否是同一个地址，验证不是同一个地址
	//vector <int> v3 = v1;//等价于v2(v1)
	//vector <int> v4{1, 2, 3}; //vector初始化
	//testVector(v4);
	//vector <int> v5 = {1, 2, 3};
	//vector <int> v6(10, 5); //重复赋值
	//cout << "v6的size值为："<<v6.size() << endl;
//迭代器
	vector <int> v_sort = {1, 2, 3, 5, 7, 9, 13};
	vector <int> v_empty = {};
	cout << &v_empty << endl;
	auto vStartAddr = v_sort.begin(); //和指针类似，通过解引用迭代器获取它所指的值
	//cout << * vStartAddr << endl;
//基于迭代器的二分查找
	binarySearch(v_sort);
	system("pause");
}