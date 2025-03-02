#include<iostream>

using namespace std;

class date {
private:
	int month;
	int day;
	int year;
public:

	//getters
	int getMonth() {
		return month;
	}

	int getDay() {
		return day;
	}

	int getYear() {
		return year;
	}
	
	//setter
	void setDay(int Tday){
		day = Tday;
	}

	void setMonth(int Tmonth) {
		month = Tmonth;
	}

	void setYear(int Tyear) {
		year = Tyear;
	}

	date() {
		day = 1;
		month = 1;
		year = 2000;
	}

	date(int Tday, int Tmonth, int Tyear) {
		day = Tday;
		month = Tmonth;
		year = Tyear;
	}



	void inputDate() {
		try {
			cout << "enter the day of the year: ";
			cin >> day;		
			if (day > 0) {
				cout << "day set!";
			}
			else {
				throw(day);
			}
		}
		catch(int num) {
			cout << "day not set it cannot be lower than 0";
			cout << "your number was " << num;
		}
		

		try {
			cout << "enter the month of the year: ";
			cin >> month;
			if (day > 0) {
				cout << "month set!";
			}
			else {
				throw(month);
			}
		}
		catch (int num) {
			cout << "month not set it cannot be lower than 0";
			cout << "your number was " << num;
		}

		try {
			cout << "enter the year: ";
			cin >> year;
			if (year > 1900) {
				cout << "year set!";
			}
			else {
				throw(year);
			}
		}
		catch (int num) {
			cout << "year not set it cannot be lower than 1900";
			cout << "your number was " << num;
		};

		
	}

	void increment() {
		day++;
		cout << "the incremented day is " << day;

	}

	void decrement() {
		day--;
		cout << "the decremented day is " << day;
	}

	void output1(){
		cout << month << "/" << day << ","<< year;
	}
	void output2() {
		cout << month;
	}
	void output3() {
		cout << year;
	}
};