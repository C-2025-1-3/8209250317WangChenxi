#include <iostream>
#include<string>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
	int size1, size2;
	size1 = strlen(s1) - 1;
	size2 = strlen(s2) - 1;
	if (size1 > size2) {
		return -1;
	}
	else {
		for (int i = 0; i < size2 - size1+1; i++) {
			if ((s2[i] == s1[0])&&!(s2[i] == ' ')) {
				cout << "find" << endl;
				bool is_same = 1;
				for ( int j = 0; j < size2; j++) {
					if (s2[i + j] == s1[j]) {
						cout << s2[i + j] << " " << s1[j] << endl;
						cout << is_same<<endl;
					}
					else {
						is_same = 0;
						//cout << s2[i + j] << " " << s1[j] << endl;
						break;
					}
				}
				if (is_same) {
					return i + 1;
				}
			}

		}
		return -1;
	}
}

int main() {
	//input
	cout << "Enter the first string :";
	string s1;
	getline(cin, s1);
	
	cout << "Enter the second string :";
	string s2;
	getline(cin, s2);

	//output
	cout <<"indexOf(\" "<<s1<<'\"' << ","<<'\"' << s2 << "\")" << "is" << indexOf(s1.c_str(), s2.c_str());
	


}