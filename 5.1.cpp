/*
#include<iostream>
using namespace std;
class Time             // 定义Time类
{
public:              // 数据成员为公用的
	int hour;
	int minute;
	int sec;
};
int main()
{
	Time t1;           //定义t1为Time类对象
	cin >> t1.hour;      //输入设定的时间 
	cin >> t1.minute;
	cin >> t1.sec;
	cout << t1.hour << "：" << t1.minute << "：" << t1.sec << endl;
	return 0;
}
*/
//
// 
// 改写程序，要求：
//(1)将数据成员改为私有的；
//(2)将输入和输出的功能改为由成员函数实现；
//(3)在类体内定义成员函数。
// 
// 
//



#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:
	int hour;
	int minute;
	int sec;
public:              // 函数成员为公用的
	int getHour() {
		return hour;
	}
	int getMin() {
		return minute;
	}
	int getSec() {
		return sec;
	}
	int setTime(int h, int m, int s) {
		hour = h;
		minute = m;
		sec = s;
		return 1;
	}
};
int main()
{
	int h, m, s;
	Time t1;           //定义t1为Time类对象
	cin >> h;      //输入设定的时间 
	cin >> m;
	cin >> s;
	t1.setTime(h, m, s);
	cout << t1.getHour() << "：" << t1.getMin() << "：" << t1.getSec()<< endl;
	return 0;
}