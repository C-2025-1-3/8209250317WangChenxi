#include <iostream>
using namespace std;
double bubble_sort(int list_size, double* list) {
	for (int i = 0; i < list_size - 1; i++) {
		for (int i = 0; i < list_size -1; i++) {
			double temp;
			if (list[i] > list[i + 1]) {
				temp = list[i + 1];
				list[i + 1] = list[i];
				list[i] = temp;
				//cout << "swap" << list[i] << "&" << list[i + 1] << endl;
			}
		}
	}

	return 1;
}
int main() {
	//输入数组
	int list_size;
	cout << "请输入数组长度" << endl;
	cin >> list_size;
	cout << "请输入"<<list_size<<"个数字" << endl;
	double* plist = new double[list_size];
	for (int i = 0; i < list_size; i++) {
		cin >> plist[i];
	}
	bubble_sort(list_size, plist);
	for (int i = 0; i < list_size; i++) {
		cout<< plist[i]<<" ";
	}
}