#include <iostream>
using namespace std;
void bubble_sort(int list_size, double* list) {
	for (int i = 0; i < list_size - 1; i++) {
		for (int i = 0; i < list_size - 1; i++) {
			double temp;
			if (list[i] > list[i + 1]) {
				temp = list[i + 1];
				list[i + 1] = list[i];
				list[i] = temp;
				//cout << "swap" << list[i] << "&" << list[i + 1] << endl;
			}
		}
	}
}

void merge(const double list1[], int listSize1, const double list2[], int listSize2, double list3[]) {
	double* list_temp = new double[listSize1 + listSize2];
	//合并list1与list2
	for (int i = 0; i < listSize1 + listSize2; i++) {
		if (i < listSize1) {
			list_temp[i] = list1[i];
		}
		else
		{
			list_temp[i] = list2[i - listSize1];
		}
	}
	//整理临时数组；
	bubble_sort(listSize1 + listSize2, list_temp);
	//将临时数组赋给list3
	for (int i = 0; i < listSize1 + listSize2; i++) {
		list3[i] = list_temp[i];
	}
}

int main() {
	//输入数组
	int list_size1;
	cout << "请输入数组1长度" << endl;
	cin >> list_size1;
	cout << "请输入" << list_size1 << "个数字" << endl;
	double* plist1 = new double[list_size1];
	for (int i = 0; i < list_size1; i++) {
		cin >> plist1[i];
	}
	int list_size2;
	cout << "请输入数组2长度" << endl;
	cin >> list_size2;
	cout << "请输入" << list_size2 << "个数字" << endl;
	double* plist2 = new double[list_size2];
	for (int i = 0; i < list_size2; i++) {
		cin >> plist2[i];
	}
	//整理输入所得数组
	bubble_sort(list_size1, plist1);
	bubble_sort(list_size2, plist2);
	//创建合并数组;
	double* plist3 = new double[list_size1 + list_size2];
	//合并数组
	merge(plist1, list_size1, plist2, list_size2, plist3);

	//输出
	cout << "The merged list is :";
	for (int i = 0; i < list_size1 + list_size2; i++) {
		cout << plist3[i] << ' ';
	}
	//delete
	delete[] plist1;
	delete[] plist2;
	delete[] plist3;
}