#include <iostream>
#include <string>

using namespace std;

class Add {
private: 
	
	

public:
	int y;
	int x;

	Add(int setx) {
		x = setx;
	}
	

	static void outPutNum(Add Var) {
        cout << Var.x;
	}

	Add operator+ (const Add& numA) {
        return Add(x + numA.x);
	}

	Add operator==(const Add& numA) {
		return (x == numA.x) && (y == numA.y);
	}
};



int main() {
	Add a(3);
	Add b(10);
	Add c(0);

	c = b + a;
	
	Add::outPutNum(c);


}