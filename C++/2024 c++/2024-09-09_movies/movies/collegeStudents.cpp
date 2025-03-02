#include <iostream>

using namespace std;

int main() {
	int surveyed = 0;
	int minimum = INT_MAX;
	int maximum = INT_MIN; 

	cout << "how many students were surveyed: ";
	cin >> surveyed;

	int* arrStudentSurv = new int[surveyed];

	for (int i = 0; i < surveyed; i++) {
		cout << "enter the amount of movies watched for student " << i << ": ";
		cin >> arrStudentSurv[i];
	}

	int average = 0;
	for (int i = 0; i < surveyed; i++) {
		average += arrStudentSurv[i];
	}

	for (int i = 0; i < surveyed; i++) {
		if (arrStudentSurv[i] < minimum) {
			minimum = arrStudentSurv[i];
		}
		if (arrStudentSurv[i] > maximum) {
			maximum = arrStudentSurv[i];
		}
	}
	
	average = average / surveyed;

	cout << "the average is " << average << endl;
	cout << "the minimum is " << minimum << endl;
	cout << "the maximum is " << maximum << endl;

	delete[] arrStudentSurv;

	return 0;
}