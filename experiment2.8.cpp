#include <iostream>
using namespace std;
int main() {
	double num_x_n, num_x_nPlusOne,a;
	bool isPresicionEnough = false ;
	cout << "请输入a = " << endl;
	cin >> a;
	num_x_n = a;
	num_x_nPlusOne = 0.5 * (num_x_n + a * 0.1 / (num_x_n * 0.1));
	while (!isPresicionEnough) {
		if (max(num_x_nPlusOne,num_x_n) - min(num_x_nPlusOne, num_x_n)<0.00001) {
			isPresicionEnough = true;
		}
		else {
			num_x_n = num_x_nPlusOne;
			num_x_nPlusOne = 0.5 * (num_x_n + a * 0.1 / (num_x_n * 0.1));

		}
	}
	cout << "所求为" << num_x_nPlusOne << endl;
}