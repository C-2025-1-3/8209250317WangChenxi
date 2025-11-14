#include <iostream>
using namespace std;
int main() {
	//变量初定义
	int numA, numB,GCD,LCM,divider1,divider2;
	cout << "请输入两个正整数" << endl;
	cin >> numA >> numB;
	divider1 =  numA;
	divider2 = numB;
	//cout << divider1 << endl << divider2;
	
	// ----------------------------------------------------------------------//
	// 求最大公约数：GCD													 //
	//方法：辗转相除法（欧几里得算法）：核心原理：基于GCD(a,b)=GCD(b,a mod b)//
	//  例：GCD(48, 18)														 //
	//	48 ÷ 18 = 2余12 → GCD(18, 12)										 //
	//	18 ÷ 12 = 1余6 → GCD(12, 6)										 //
	//	12 ÷ 6 = 2余0 → GCD = 6											 //
	//-----------------------------------------------------------------------//

	for (int i = min(numA, numB); i <= min(numA, numB) && i > 0; i--) {
		if (max(divider1,divider2)% min(divider1, divider2) == 0) {
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
	LCM = (numA * numB) / GCD;
	cout << "最大公约数为"<< GCD << endl;
	cout << "最小公倍数为"<< LCM << endl;
	
}