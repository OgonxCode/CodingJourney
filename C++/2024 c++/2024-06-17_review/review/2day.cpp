#include <iostream>
using namespace std;

int main() {
	if((12>11 && true) ^ (!true || (3>5)))
		{
		cout << "True" << endl;
	} else {
		cout << "False" << endl;
	}
}