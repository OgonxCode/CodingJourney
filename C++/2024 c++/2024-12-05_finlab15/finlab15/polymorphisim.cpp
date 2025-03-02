#include <iostream>

using namespace std;

class shape {
private:
	int areaValue;

public:
	int virtual area() { return 0; };
	virtual ~shape() {};
};

class circle : public shape {
private:
	int radius;

public:

	int area() override {
		return 3.14159 * pow(radius,2);
	}

	circle(int Tradius) {
		radius = Tradius;
	}

};

class rectangle : public shape {
private:
	int length;
	int width;

public:

	int area() override {
		return length * width;
	}

	rectangle(int Tlength, int Twidth) {
		length = Tlength;
		width = Twidth;
	}
};

int main() {
	circle myCircle(5);
	rectangle myRectangle(5, 5);

	cout << " the area of the circle is " << myCircle.area() << "." << endl;
	cout << "the area of the rectangle is " << myRectangle.area() << "." << endl;
}