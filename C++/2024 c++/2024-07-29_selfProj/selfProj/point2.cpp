#include <iostream>

using namespace std;

int main() {
	char str[] = "A string";

	char* pStr = str;

	cout << &pStr[0] << &pStr[3];

	pStr += 2;

	cout << &pStr[2] << &pStr[5];

	return 0;
}