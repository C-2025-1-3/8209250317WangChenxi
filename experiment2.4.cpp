#include <iostream>
using namespace std;
int main() {
	float number1,number2;
	char operation;
	cout << "请输入第一个数字";
	cin >> number1;
	cout << "请输入运算（+，-，*，/，% ）";
	cin >> operation;
	cout << "请输入第二个数字";
	cin >> number2;
	if (operation == '+') {
		cout << number1 << operation << number2 << '=' << number1 + number2;
	}
	else if (operation == '-') {
		cout << number1 << operation << number2 << '=' << number1 - number2;
	}
	else if (operation == '*') {
		cout << number1 << operation << number2 << '=' << number1 * number2;
	}
	else if (operation == '/') {
		if (number2 == 0) {
			cout << "除数不可为零";
		}
		else { 
			cout << number1 << operation << number2 << '=' << number1*0.1 / number2*0.1; 
		}
	}
	else if (operation == '%') {
		cout << number1 << operation << number2 << '=' << int(number1) % int(number2);
	}
	else {
		cout << "非法表达式或运算符";
	}
}