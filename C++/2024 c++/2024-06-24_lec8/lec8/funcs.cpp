#include<iostream>

using namespace std;

int maxOne(int a, int b) {
	return a > b ? a : b;
}

int main() {
	cout << maxOne(5, 6);
	
}