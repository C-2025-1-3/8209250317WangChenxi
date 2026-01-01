#include <iostream>
using namespace std;
//实验4.3
int main() {
	bool L_list[100];

	//第一个学生将储物柜全部打开
	for (int i = 0; i < 100; i++) {
		L_list[i] = true;
	}

	// 第二个学生S2，从第二个存物柜（记为L2）开始，每隔两个存物柜，将它们关闭。
	// 第三个学生S3从第三个存物柜L3开始，每隔三个，将它们的状态改变（开着的关上，关着的打开）。
	// 学生S4，从L4开始，每隔四个改变它们的状态。
	// 学生S5，从L5开始，每隔五个改变状态。依此类推
	for (int i = 1; i < 100; i++) {
		for (int j = i; j < 100; j += (i + 2)) {//间隔N个，S2改变L2,L5,L8....
			L_list[j] = !(L_list[j]);
			//cout << 'L' << j+1 << "changed by " << 'S' << i+1 ;
			//cout << " L" << j + 1 << " is " << L_list[j] << endl;
			//L_list[j] == 1 ? L_list[j] = 0 : L_list[j] = 1;
		}
	}

	//输出
	for (int i = 0; i < 100; i++) {
		L_list[i] == 1 ? cout << "L" << (i + 1) << ' ' : cout << "";
	}
}