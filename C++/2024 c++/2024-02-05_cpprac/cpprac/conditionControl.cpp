// write a program that displays all the factors of a positive integer on the screen
// factors of a integer are all integers that can divide the number evenly divide the number
// if the input integer is not positive the program should display an error and terminate

#include<iostream>


int main() {
	using namespace std;
	
	int numToFac; 
	int factored;
	bool valid = false;

	cout << "please enter a positive number to factor: ";
	cin >> numToFac;
	
		while (numToFac <= 0) {
			cout << "Try again enter a positive number: ";
			cin >> numToFac;
		}

		 
			cout << "the factors of " << numToFac << " are: " << endl;
			cout << 1 << endl;

			for (int i = 2; i <= numToFac / 2; i++) {

				if (numToFac % i == 0) {
					cout << i << endl;
				}

			}
			if (numToFac != 1) {
				cout << numToFac << endl;
			}
		}

	
	