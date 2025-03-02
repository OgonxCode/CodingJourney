#include <iostream>

using namespace std;

//prototype
bool isVisa(const char card[], int size);
bool isMasterCard(const char card[], int size);
bool isAmericanExpress(const char card[], int size);
bool isDiscover(const char card[], int size);
bool isValid(const char card[], int size);

int main() {
	int size;
	cout << "Enter the number of digits: ";
	cin >> size;
	char* card = new char[size];
	cout << "Enter the digits: ";
	for (int i = 0; i < size; i++) {
		cin >> card[i];
	}
	if (isValid(card, size)) {
		cout << "The card number is valid" << endl;
	} else {
		cout << "The card number is invalid" << endl;
	}
	delete[] card;
	return 0;
}

// check if the card number is a Visa card number
bool isVisa(const char card[], int size) {
	if (size < 13 || size > 16 || card[0] != '4') {
		return false;
	}
	return true;
}

// check if the card number is a MasterCard number
bool isMasterCard(const char card[], int size) {
	if (size != 16 || card[0] != '5'){
		return false;
	}
	return true;
}

// check if the card number is an American Express card number
bool isAmericanExpress(const char card[], int size){
	if (size != 15 || card[0] != '3' || card[1] != '7') {
		return false; }
	return true;
}

// check if the card number is a Discover card number
bool isDiscover(const char card[],int size) {
	if (size != 16 || card[0] != '6') {
		return false;
	}
	return true;
}

// check if the card number is valid
bool isValid(const char card[],int size) {
	if (!isVisa(card, size) && !isMasterCard(card, size) && !isAmericanExpress(card, size) && !isDiscover(card, size)) {
		return false;
	}
	int sum = 0;
	for (int i = size - 2; i >= 0; i -= 2) {
		int num = (card[i] - '0') * 2;
		if (num > 9) {
			num = num / 10 + num % 10;
		}
		sum += num;
	}
	for (int i = size-1; i >= 0; i -= 2) {
		sum += card[i] - '0';
	}
	return sum % 10 == 0;
}

