#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
using namespace std;

int main() {
	int randInt;
	srand(time(0));
	randInt = rand() % (15 - 5 + 1) + 5;

	cout << randInt;



	float randFloat;

	randFloat = rand() % (99.99 - 0) + 0;

	cout << randFloat;


	// capitals letters 65-90 lower case letters 97-122


	int aciiCap = rand() % (90 - 65) + 65;
	int aciiLow = rand() % (122 - 97) + 97;
	int upOrLow = (rand() % 2) + 1;
	char letter;


	if (upOrLow == 1) {
		letter = aciiCap;
		cout << "Your letter is " << letter << endl;
	}
	else if (upOrLow == 2) {
		letter = aciiLow;
		cout << "Your letter is " << letter << endl;
	}
	else {
		cout << "something went wrong";
	}
}