#include <iostream>
using namespace std;
class Rectangle {
private:
	double length,width,height;
public:
	void setParameters(double l, double w, double h);
	void setParameters(double l);
	void setHeight(double h);
	void setWidth(double w);
	void setLength(double l);
	double volume();
	Rectangle() { length = 1; width = 1; height = 1; }
	Rectangle(double l, double w, double h) {
		l > 0 ? length = l : length = 404;
		h > 0 ? height = h : height = 404;
		w > 0 ?  width = w : width = 404;
	}
};
void Rectangle::setParameters(double l, double w, double h) {
	l > 0 ? length = l : l;
	h > 0 ? height = h : h;
	w > 0 ? width = w : w;
}
void Rectangle::setParameters(double l) {
	if (l > 0) {
		length = l;
		height = l;
		width = l;
	}
}
void Rectangle::setHeight(double h) {
	h > 0 ? height = h : h;
}
void Rectangle::setLength(double l) {
	l > 0 ? length = l : l;
}
void Rectangle::setWidth(double w) {
	w > 0 ? width = w : w;
}
double Rectangle::volume() {
	return height * length * width;
}

int main() {
	double h1, h2, h3, l1, l2, l3, w1, w2, w3;
	cout << "the first rectangle:(height,length,width)";
	cin >> h1 >> l1 >> w1;
	cout << "the second rectangle:(height,length,width)";
	cin >> h2 >> l2 >> w2;
	cout << "the third rectangle:(height,length,width)";
	cin >> h3 >> l3 >> w3;
	Rectangle r1, r2, r3;
	r1.setParameters(l1, w1, h1);
	r2.setParameters(l2, w2, h2);
	r3.setParameters(l3, w3, h3);
	cout << "the volume of the first rectangle is " << r1.volume() << endl;
	cout << "the volume of the second rectangle is " << r2.volume() << endl;
	cout << "the volume of the third rectangle is " << r3.volume() << endl;
}