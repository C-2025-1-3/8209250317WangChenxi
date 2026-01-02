#include <iostream>
using namespace std;
class Point {
private:
	int x, y;
public:
	void setPoint(int i, int j);
	void display();
	Point();
	Point(int i, int j);
};
Point::Point() {
	x = 60;
	y = 80;
}
Point::Point(int i, int j) {
	x = i;
	y = j;
}
void Point::setPoint(int i, int j) {
	x += i;
	y += j;
}
void Point::display() {
	cout << "x:" << x << ' ' << "y:" << y<<endl;
}

int main() {
	Point p1;
	Point p2(5, 5);
	Point p3;
	p3.setPoint(5, 6);
	p1.display();
	p2.display();
	p3.display();
	p1.setPoint(10, 10);
	p1.display();
}