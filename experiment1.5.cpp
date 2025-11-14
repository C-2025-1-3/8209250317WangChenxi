#include <iostream>
#include<iomanip>
using namespace std;
int main() {
	float temperture_F;
	cout << "请输入华氏温度：" << endl;
	cin >> temperture_F;
	cout <<"等于" <<setprecision(4)<< 5 * (temperture_F - 32) / 9<<"摄氏度";//只在输出数的整数部分只有两位时保留2位
}