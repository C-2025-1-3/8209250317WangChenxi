#include <iostream>
using namespace std;
int main() {
	float x;
	cout << "请输入x的值(0<x<10)";
	cin >> x;
	if (x>0 && x<1) {
		cout << "y=" << 3 - 2 * x;
	}
	else if (x<5 && x>=1) {
		cout << "y=" << 1+0.5*x;
	}
	else if (x>=5&&x<10) {
		cout << "y=" << x*x;
	}
	else {
		cout << "你在输什么？";
	}
}
