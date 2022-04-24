#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<string>
using namespace std;

////��д����������һ��ֻ��vector<int>�ĵ�������һ��intֵ��������������ָ���ķ�Χ���Ҹ�����ֵ

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
//����������insert����
	vector<string> v1{ "a", "an", "the" };
	v1.insert(v1.begin(), v1.end() - 2, v1.end());
	v1.insert(v1.begin(), { "these", "words", "will" });
	v1.insert(v1.begin(), v1.begin(), v1.end());
	cout << endl;
}

void testFrontAddr() {
//����insert��ָ���׵�ַ�ĵ������Ƿ�ı�
	vector<int> v1{ 1,2,3,4,5 };
	vector<int>::iterator iter;
	iter = v1.begin();
	cout << "��������ַ"<<&iter << endl;
	cout << "������ֵ" << *iter << endl;
	cout << "������ַ"<<&v1 << endl;
	cout << "������Ԫ�ص�ַ" << &v1[1] << endl;
	cout << "������Ԫ�ص�ַ" << &v1[2] << endl;
	iter = v1.insert(iter, 0);
	cout << "��������ַ" <<&iter << endl;
	cout << "������ֵ" << *iter << endl;
	cout << "������ַ" << &v1 << endl;
	cout << "������Ԫ�ص�ַ" << &v1[1] << endl;
	cout << "������Ԫ�ص�ַ" << &v1[2] << endl;
}

void testIterDeque() {
//�ӱ�׼��������뵽deque��ʹ�õ��������deque
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
//����ia��vector��list�У�ʹ��erase��list��ɾ������Ԫ�أ���vector��ɾ��ż��Ԫ��
	int ia[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	//��������תSTL����
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
	//������+����ʹ��������ֵ�޸ģ���ַ����

	cout << "����Ҫ���ҵ�ֵ" << endl;
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
		cout << "ֵΪ��" << *res << endl;
	}
	else
	{
		cout << "û�з���Ҫ���ֵ" << endl;
	}
	system("pause");
	return 0;
}