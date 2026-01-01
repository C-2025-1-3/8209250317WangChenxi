#include <iostream>
#include <iomanip>
#include"mytemperature.h"
using namespace std;
int main() {
	cout << "Celsius" << '\t' << "Fahrenheit" << '\t' << '|' << '\t' << "Celsius" << '\t' << "Fahrenheit" << endl;
	for (float  i = 0.0; i <= 9; i++) {
		cout << fixed << setprecision(1) << 40.0 - i << '\t' << celsius_to_fah(40.0 - i) << '\t' << '\t' << '|' << '\t' << 120.0 - i * 10 << '\t';
		cout<<fixed<<setprecision(2) << fahremheit_to_cels(120.0 - i * 10) << endl;
	}
}