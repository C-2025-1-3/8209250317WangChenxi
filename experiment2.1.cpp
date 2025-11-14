#include <iostream>
using namespace std;
int main() {
	char a_char;
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û";
	cin >> a_char;
	if ((a_char >= 97) && (a_char <= 121)) {
		cout << char(a_char - 32);
	}
	else {
		cout << a_char + 1;
	}
}