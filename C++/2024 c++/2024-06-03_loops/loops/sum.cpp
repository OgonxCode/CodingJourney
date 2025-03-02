#include<iostream>
using namespace std;


int main() {
	int monthTemp;
	int monthNum;
	string monthName;
	int highestTemp = 0;

	for (int i = 0; i < 12; i++) {
		cout << "Enter the temperature for month " << i + 1 << ": ";
		cin >> monthTemp;
		if (monthTemp > highestTemp) {
			highestTemp = monthTemp;
			monthNum = i + 1;
		}
	}

	if (monthNum == 1) {
		monthName = "January";
	}
	else if (monthNum == 2) {
		monthName = "February";
	}
	else if (monthNum == 3) {
		monthName = "March";
	}
	else if (monthNum == 4) {
		monthName = "April";
	}
	else if (monthNum == 5) {
		monthName = "May";
	}
	else if (monthNum == 6) {
		monthName = "June";
	}
	else if (monthNum == 7) {
		monthName = "July";
	}
	else if (monthNum == 8) {
		monthName = "August";
	}
	else if (monthNum == 9) {
		monthName = "September";
	}
	else if (monthNum == 10) {
		monthName = "October";
	}
	else if (monthNum == 11) {
		monthName = "November";
	}
	else if (monthNum == 12) {
		monthName = "December";
	}
	cout << "The highest temperature is: " << highestTemp << " on " << monthName<< endl;

}
