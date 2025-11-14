#include <iostream>
using namespace std;
int main() {
	cout << "苹果每个0.8元，第一天买2个，第二天开始，每天买前天的2倍，直到购买的苹果数不超过100的最大值，求每天平均花多少钱。" << endl;
	int NumOfApples = 2, days = 1;
	float cost = 0.0;
	for (days;2*NumOfApples<=100;days++) {
		NumOfApples = NumOfApples * 2;
		cost = NumOfApples * 0.8;
	}
	cout << "一共买了" << NumOfApples << "个苹果。" << endl;
	cout << "每天平均花" << cost/days << "元。" << endl;
}