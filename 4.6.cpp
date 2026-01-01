#include <iostream>
#include<string>
using namespace std;

void count(const char s[], int counts[]) {
	for (int i = 0; i < strlen(s); i++) {
		if ((s[i] > 64) && (s[i] < 91)) {
			counts[s[i] - 65]++;
		}
		else if ((s[i]>96)&&(s[i]<123))
		{
			counts[s[i] - 97]++;
		}
		else
		{
			cout << "·ÇÓ¢ÎÄ×Ö·û" << endl;
		}
	}
}

int main() {
	int counts[26] = {};
	char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
	//input
	string s1;
	cout << "Enter a string : ";
	getline(cin, s1);
	count(s1.c_str(), counts);
	for (int i = 0; i < 26; i++) {
		if (!(counts[i] == 0)) {
			cout << alphabet[i] << " : " << counts[i] <<" times" << endl;
		}
	}
}