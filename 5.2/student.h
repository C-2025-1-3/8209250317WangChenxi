#pragma once
//student
class Student {
public:
	void display();
	int set_value(int n, char na[], char s);
	Student() { num = 1; sex = 'm'; }
	Student(int n,const char na[], char s) {
		num = n;
		for (int i = 0; i < 20; i++) {
			name[i] = na[i];
		}
		sex = s;
	}
private:
	int num;
	char name[20] = "lihua";
	char sex;
};