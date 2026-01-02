#include <iostream>
using namespace std;

class Student {
private:
	int num;
	int grade;
public:
	void set_values(int n, int g);
	int get_num();
	int get_num() const;
	int  get_grade();
	Student();
	Student(int n, int g);
};

void Student::set_values(int n, int g) {
	n > 0 ? num = n : n;
	g >= 0 ? grade = g : n;
}
int  Student::get_num() {
	return num;
}
int  Student::get_num() const {
	return num;
}
int Student::get_grade() {
	return grade;
}
Student::Student() {
	num = 1;
	grade = 0;
}
Student::Student(int n, int g) {
	n > 0 ? num = n : num=1;
	g >= 0 ? grade = g : grade = 0;
}
Student* max(Student* s1,Student*s2) {
	if (s1->get_grade() > s2->get_grade()) {
		return s1;
	}
	else
	{
		return s2;
	}
}

int main() {
	Student s1(1, 100);
	Student s2(2, 99);
	Student s3(3, 70);
	Student s4(4, 120);
	Student s5(5, 111);
	Student s[5] = { s1,s2,s3,s4,s5 };
	cout<<max(max(max(max(s+1, s), s+2), s+3), s+4)->get_num();
}