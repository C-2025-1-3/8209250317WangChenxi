#include <iostream>
using namespace std;
int main() {
	for (int i = 1;i<=5;i++) {
		for (int o = i;o>=1;o--) {
			cout << "*";
		}
		cout << endl;
	}
}