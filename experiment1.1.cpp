#include<iostream>
using namespace std;
int main() {
	//更正：int k = 1;
	int k = 1;
	//更正结束
	int i = k + 1;    // 错误未定义标识符：“k”
	cout << i++ << endl;
	//int i = 1;	  // “i”重定义；多次初始化 
	//更正：
	i = 1;
	cout << i++ << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}