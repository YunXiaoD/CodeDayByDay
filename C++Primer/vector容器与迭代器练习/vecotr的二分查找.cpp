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
	cout << "������Ҫ���ҵ�ֵ" << endl;
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
//����һ��vector����
	//vector <int> v1;  //����һ����vector�����Ĵ洢����Ϊint
	//vector <int> v2(v1); //v2�а���v1������Ԫ�صĸ���������һ��v1��v2�Ƿ���ͬһ����ַ����֤����ͬһ����ַ
	//vector <int> v3 = v1;//�ȼ���v2(v1)
	//vector <int> v4{1, 2, 3}; //vector��ʼ��
	//testVector(v4);
	//vector <int> v5 = {1, 2, 3};
	//vector <int> v6(10, 5); //�ظ���ֵ
	//cout << "v6��sizeֵΪ��"<<v6.size() << endl;
//������
	vector <int> v_sort = {1, 2, 3, 5, 7, 9, 13};
	vector <int> v_empty = {};
	cout << &v_empty << endl;
	auto vStartAddr = v_sort.begin(); //��ָ�����ƣ�ͨ�������õ�������ȡ����ָ��ֵ
	//cout << * vStartAddr << endl;
//���ڵ������Ķ��ֲ���
	binarySearch(v_sort);
	system("pause");
}