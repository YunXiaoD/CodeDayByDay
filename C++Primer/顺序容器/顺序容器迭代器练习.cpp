#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<string>
using namespace std;

////编写函数，接受一对只想vector<int>的迭代器和一个int值。在两个迭代器指定的范围查找给定的值

vector<int>::const_iterator returnRes(vector<int>::const_iterator begin, vector<int>::const_iterator end, int target_value) {
	while(begin != end){
		if (*begin == target_value)
		{
			return begin;
		}
		else
		{
			begin++;
		}
	}
	return end;
}

void vectorInset() {
//测试容器的insert功能
	vector<string> v1{ "a", "an", "the" };
	v1.insert(v1.begin(), v1.end() - 2, v1.end());
	v1.insert(v1.begin(), { "these", "words", "will" });
	v1.insert(v1.begin(), v1.begin(), v1.end());
	cout << endl;
}

void testFrontAddr() {
//测试insert后指向首地址的迭代器是否改变
	vector<int> v1{ 1,2,3,4,5 };
	vector<int>::iterator iter;
	iter = v1.begin();
	cout << "迭代器地址"<<&iter << endl;
	cout << "迭代器值" << *iter << endl;
	cout << "容器地址"<<&v1 << endl;
	cout << "容器首元素地址" << &v1[1] << endl;
	cout << "容器次元素地址" << &v1[2] << endl;
	iter = v1.insert(iter, 0);
	cout << "迭代器地址" <<&iter << endl;
	cout << "迭代器值" << *iter << endl;
	cout << "容器地址" << &v1 << endl;
	cout << "容器首元素地址" << &v1[1] << endl;
	cout << "容器次元素地址" << &v1[2] << endl;
}

void testIterDeque() {
//从标准库读入输入到deque，使用迭代器输出deque
	list<string> d1;
	string word;
	while (cin >> word) {
		if (word=="end")
		{
			break;
		}
		d1.push_back(word);
	} 
	for (auto iter= d1.begin();iter!=d1.end(); iter++)
	{
		cout << *iter << endl;
	}
}

void copyAndDelete() {
//拷贝ia到vector和list中，使用erase从list中删除奇数元素，从vector中删除偶数元素
	int ia[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	//内置数组转STL容器
	list<int> l1(ia, end(ia));
	vector<int> vec(l1.begin(), l1.end());
	auto list_begin = l1.begin();
	auto vec_begin = vec.begin();
	while (list_begin != l1.end()) {
		if ((*list_begin)%2==0) {
			++list_begin;
		}
		else
		{
			list_begin = l1.erase(list_begin);
		}
	}
	while (vec_begin != vec.end()) {
		if (*vec_begin % 2==0) {
			vec_begin = vec.erase(vec_begin);
		}
		else
		{
			vec_begin++;
		}
	}
	cout << endl;

}

void constPtrTest() {
	vector<const char*> articles = { "a","an","the" };
	char* c1 = "ann";
	string s1 = articles[0];
	string s2 = c1;
	cout << endl;
}

int main() {
	//vectorInset();
	//testFrontAddr();
	//testIterDeque();
	//copyAndDelete();
	constPtrTest();
	list<string> vv1 = { "a","an","the" };
	auto iter4 = vv1.begin();
	cout << &iter4 << endl;
	iter4++;
	cout << &iter4 << endl;
	cout << &vv1.begin() << endl;
	deque<string> d1(vv1.begin(), iter4);
	//迭代器+操作使迭代器的值修改，地址不变

	cout << "输入要查找的值" << endl;
	int a;
	cin >> a;
	vector <int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	vector<int>::const_iterator iter1;
	iter1 = v1.begin();
	vector<int>::const_iterator iter2;
	iter2 = v1.end();
	vector<int>::const_iterator res = returnRes(iter1, iter2, a);
	if (res != iter2) {
		cout << "值为：" << *res << endl;
	}
	else
	{
		cout << "没有符合要求的值" << endl;
	}
	system("pause");
	return 0;
}