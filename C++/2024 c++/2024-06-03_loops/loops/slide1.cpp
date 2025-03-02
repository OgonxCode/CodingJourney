/*#include <iostream>
using namespace std;

int main() {
	int userInput;
	int sum = 0;
	int iterations = 0;
	bool run = true;

	while (run) {
		cout << "Enter a number to average: ";
		cin >> userInput;
		if (userInput == -1) {
			cout << "The average is: " << sum / iterations << endl;
			break;
		}
		else if (userInput == 0 || userInput < -1){
			cout << "Invalid input" << endl;
		}
		else {
			sum += userInput;
			iterations++;

		}
	}
} */