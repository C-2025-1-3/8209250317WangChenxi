#include <iostream>
using namespace std;
bool is_prime(int num) {
	//测试n是否为素数的最基本方法为试除法。此一程序将n除以每个大于1且小于等于n的平方根之整数m。
	//若存在一个相除为整数的结果，则n不是素数；反之则是个素数。
	if (num > 1) {
		for (int i = 2; i <= sqrt(num); i++) {
			if (num % i ==0) {
				return 0;
			}

		}
		return 1;
	}
	else {
		return 0;
	}
}
int main() {
	int i = 0 ,num = 0;
	int primes[200] = {};
	while (!(i >= 200)) {
		if (is_prime(num)) {
			primes[i] = num;
			i++;
			//cout << "find!" << endl;
		}
		num++;
	}
	for (i = 0; i < 200; i++) {
		cout << primes[i] << " ";
		(i + 1) % 10 == 0 ? cout << endl: cout << "";
	}
}