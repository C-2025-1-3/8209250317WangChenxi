#include <iostream>
using namespace std;
// Tn = Tn-1 * 1/2 -1
//Tn-1 = (Tn+1)*2
int Taozi(int days) {
	if (days == 1) {
		return 1;
	}
	return (Taozi(days - 1) + 1) * 2;
}
int main() {
	int Tao;
	Tao = Taozi(10);
	cout << "猴子摘了" << Tao << "个桃子" << endl;
}