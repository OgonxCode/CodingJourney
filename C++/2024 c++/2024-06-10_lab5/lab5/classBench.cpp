#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {
	cout << "enter the number of integers: ";
	int num, reverse = 0;
	cin >> num;
	while (num != 0) {
		reverse = reverse * 10;
		reverse = reverse + num % 10;
		num = num / 10;
	}
	cout << "The reverse of the number is " << reverse << endl;
	return 0;



}