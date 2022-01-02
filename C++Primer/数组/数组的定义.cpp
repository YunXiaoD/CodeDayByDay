#include<iostream>;
using namespace std;

int c[5];
void main() {
//数组的定义应该为常量
//字符数组应留出空白符位置
	int a = 5;
	//int arr[a]; //这样定义会报错应改为以下方式：
	const int b = 5;
	int arr[b];
//针对字符数组
	//char arr3[4] = "abcd"; //报错，没有预留空白符位置
	char arr4[5] = "abcd";
//数组的指针与引用
	int *ptrs[10]; //ptrs是含有10个整型指针的数组
	//int &refs[10]; // 错误：不存在引用的数组
	int(*Parray)[10]; // Parray指向一个含有10个整数的数组
	int(&arrRef)[5] = arr; // arrRef引用一个含有10个整数的数组

}
