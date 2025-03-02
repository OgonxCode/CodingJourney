#include <iostream>

using namespace std;

class basicShape {

public:
	int getArea() {
		return area;
		virtual void calcArea() = 0;
	}

private:
	int area;
};

class circle : public basicShape {

};

int main() {

}