// write a program that reads a positive integer from the keyboard,
// and specifies if the input integer is prime or not
// a prime number is a number that onl has 2 factors: 1 and itself 
// note that number 1 is neither prime or nor non-prime

#include<iostream>
using namespace std;

int main() {
	int num;
	num = 90;
	for(int i = 2; i < num / 2; i++){
		if (num % i == 0) {
			cout << num << "is not prime num " << endl;
				break;
		}
		else {
			cout << i << " is a factor of " << num;
		}
	}	
}