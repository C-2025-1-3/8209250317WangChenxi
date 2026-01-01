#include <iostream>
using namespace std;
int main() {
	cout << "Enter ten numbers:";
	int inputNum[10] = { 0 };
	int NumOfDistinctNums = 0;
	//输入
	for (int i = 0; i < 10; i++) {
		int a;
		cin >> a;
		if (a < 10 && a>0) {
			inputNum[i] = a;
		}
		else {
			cout << "invalid number";
		}
	}
	//判断不同数的个数
	for (int i = 0; i < 10; i++) {
		bool is_the_same = 0;
		for (int j = 0; j < i; j++) {
			if (inputNum[i] == inputNum[j]) {
				is_the_same = 1;
			}
		}
		if (!is_the_same) {
			NumOfDistinctNums++;
		}
	}

	int* plist = new int[NumOfDistinctNums];
	//将不同的数加入plist数组
	for (int i = 0, pindex = 0; i < 10; i++) {
		bool is_the_same = 0;
		for (int j = 0; j < i; j++) {
			if (inputNum[i] == inputNum[j]) {
				is_the_same = 1;
			}
		}
		if (!is_the_same) {
			cout << "find" << inputNum[i] << endl;
			plist[pindex] = inputNum[i];
			pindex++;
		}
	}
	//输出
	cout << "The Distinct Numbers Are:";
	for (int i = 0; i < NumOfDistinctNums; i++) {
		cout << plist[i] << ' ';
	}
	delete[]  plist;
}
