#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int parseHex(const char* const hexString) {
	int num = 0;
	for (int i = 0; i < strlen(hexString); i++) {
		int temp = pow(16, (strlen(hexString) - i -1));
		switch (hexString[i]) {
		case '0':num += 0; break;
		case '1':num += 1*temp ; break;
		case '2':num += 2*temp; break;
		case '3':num += 3 * temp; break;
		case '4':num += 4 * temp; break;
		case '5':num += 5 * temp; break;
		case '6':num += 6 * temp; break;
		case '7':num += 7 * temp; break;
		case '8':num += 8 * temp; break;
		case '9':num += 9 * temp; break;
		case 'a':num += 10 * temp; break;
		case 'A':num += 10* temp; break;
		case 'b':num += 11 * temp; break;
		case 'B':num += 11 * temp; break;
		case 'c':num += 12 * temp; break;
		case 'C':num += 12 * temp; break;
		case 'd':num += 13 * temp; break;
		case 'D':num += 13 * temp; break;
		case 'e':num += 14 * temp; break;
		case 'E':num += 14 * temp; break;
		case 'f':num += 15 * temp; break;
		case 'F':num += 15 * temp; break;
		default:num += 0; break;
		}
	}
	return num;
}

int main() {
	string hex;
	cout << "Enter a Hex number:";
	getline(cin, hex);
	cout << "It's equal to " << parseHex(hex.c_str()) << endl;
}