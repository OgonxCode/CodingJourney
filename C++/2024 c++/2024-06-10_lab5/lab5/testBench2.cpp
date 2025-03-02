/*#include<iostream>

using namespace std;

int main() {
	int numOfInt;
	int numOfPositives = 0;
	int numOfNegatives = 0;
	double sum = 0;
	double average;
	bool run = true;
	
	cout << "enter a number, the program exits if input is 0: ";
	while (run){
		
		cin >> numOfInt;
		if (numOfInt == 0) {
			run = false;
			if (numOfPositives == 0 && numOfNegatives == 0) {
				cout << "You did not enter any numbers\n";
				exit(0);
			}
			break;
		}
		else if (numOfInt > 0) {
			numOfPositives++;			
			sum += numOfInt;
		}
		else if (numOfInt < 0) {
			numOfNegatives++;			
			sum += numOfInt;
		}

	}
	static_cast<double>(numOfPositives);
	static_cast<double>(numOfNegatives);

	average = sum / (numOfPositives + numOfNegatives);
	cout << "The number of positives is " << numOfPositives << endl;
	cout << "The number of negatives is " << numOfNegatives << endl;
	cout << "The average of all input values is " << average << endl;

	return 0;
}
*/