//student.cpp
#include <iostream>
#include "student.h"
using namespace std;
void Student::display() {
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;

}
int Student::set_value(int n, char na[], char s) {
	num = n;
	for (int i = 0; i < 20; i++) {
		name[i] = na[i];
	}
	sex = s;
	return 1;
}