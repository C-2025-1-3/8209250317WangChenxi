#include <iostream>
using namespace std;

void selection_sorting(double list[], int list_size) {
	for (int i = 0; i < list_size - 1; i++) {
		int minIndex = i;
		for (int j = i + 1; j < list_size; j++) {
			list[j] < list[minIndex] ? minIndex = j : 0 ;
		} 
		if (!(minIndex == i)) {
			double temp = list[minIndex];
			list[minIndex] = list[i];
			list[i] = temp;
		}
	}
}

int main() {
	//input
	int listSize;
	cout << "Enter the number of your list:(it>0)";
	cin >> listSize;
	listSize > 0 ? cout << "confirmed"<<endl : cout<<"invalid listsize";

	double* plist = new double[listSize];//new

	cout << "Enter numbers:";
	for (int i = 0; i < listSize; i++) {
		cin >> plist[i];
	}

	selection_sorting(plist, listSize);

	//output
	for (int i = 0; i < listSize; i++) {
		cout << *(plist+i) << " ";
	}
	//delete 
	delete[] plist;
}