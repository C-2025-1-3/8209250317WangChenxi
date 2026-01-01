#include <iostream>
using namespace std;
int findGCD(int numA,int numB) {
	//变量初定义
	int GCD,  divider1, divider2;

	// ----------------------------------------------------------------------//
	// 求最大公约数：GCD													 //
	//方法：辗转相除法（欧几里得算法）：核心原理：基于GCD(a,b)=GCD(b,a mod b)//
	//  例：GCD(48, 18)														 //
	//	48 ÷ 18 = 2余12 → GCD(18, 12)										 //
	//	18 ÷ 12 = 1余6 → GCD(12, 6)										 //
	//	12 ÷ 6 = 2余0 → GCD = 6											 //
	//-----------------------------------------------------------------------//

	divider1 = numA;
	divider2 = numB;
	for (int i = min(numA, numB); i <= min(numA, numB) && i > 0; i--) {
		if (max(divider1, divider2) % min(divider1, divider2) == 0) {
			GCD = min(divider1, divider2);
			break;
		}
		else {
			int o_div1 = divider1, o_div2 = divider2; //保存 原始的 除数 和 被除数//
			divider2 = max(o_div1, o_div2) % min(o_div1, o_div2);
			divider1 = min(o_div1, o_div2);
			//cout << divider1 << endl << divider2;
		}


	}
	
	return GCD;

}
int findLCM(int& GCD, int& numA, int& numB) {
	int LCM;
	LCM = (numA * numB) / GCD;
	return LCM;
}
int main() {
	
	int numA, numB;
	cout << "请输入两个正整数" << endl;
	cin >> numA >> numB;

	int GCD = findGCD(numA, numB);
	int LCM = findLCM(GCD, numA, numB);
	cout << "最大公约数为" << GCD << endl;
	cout << "最小公倍数为" << LCM << endl;

}