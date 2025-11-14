#include <iostream>
using namespace std;
int main() {
	float length_a, length_b, length_c;
	cout << "请输入三角形的三边长";
	cin >> length_a >> length_b >> length_c;
	if ((length_a < (length_b + length_c)) &&( length_b < (length_a + length_c) )&&( length_c < (length_a + length_b))) {
		float x;
		x = (length_a + length_b + length_c - max(max(length_a, length_b), length_c)) * 0.5;
		if (x == length_a || x == length_b || x == length_c) {
			cout << "此三角形为等腰三角形" << endl;
			if (length_a == length_b && length_b == length_c) {
				cout << "此三角形还为等边三角形"<<endl;
			}
		}
		else {
			cout << "此三角形不是等腰三角形";
		}
	}
	else {
		cout << "不构成三角形。";
	}
}