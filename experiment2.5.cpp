#include <iostream>
#include <string>
using namespace std;
int main() {
	//变量初始化
	string texts;
	char c;
	int i = 0;
	int English_character=0, space=0, Math_character=0, other_character=0;
	//-------------//
	//用户输入字符//
	cout << "输入一行字符";
	getline(cin, texts);
	//cout << texts;
	c = texts[0];

	int strlength = texts.length();//获取字符长度
	for (i; i<=strlength;i++ ) {
		c = texts[i];
		cout << texts[i]<<endl;
		if (c >= 48 && c <= 57) {
			Math_character++;
		}
		else if ((c >= 65 && c <= 90) || (c <= 122 && c >= 97)) {
			English_character++;
		}
		else if (c == 32) {
			space++;
		}
		else {
			other_character++;
		}
	}
	cout << "你输入的字符有"<<strlength<<"个" << endl;
	cout << "数字字符：" << Math_character <<endl<< "英文字母：" << English_character <<endl<< "空格：" << space <<endl<< "其他字符：" << other_character - 1 << endl;
	//printf("数字字符：%d，英文字母：%a，空格：%b，其他字符：%c",Math_character,English_character,space,other_character);
}