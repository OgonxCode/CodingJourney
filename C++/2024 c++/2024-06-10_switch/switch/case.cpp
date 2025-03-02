#include<iostream>

using namespace std;

int main() {
	int userInput;
	int x;
	int y;

	cout << "Enter a mathematical operatior (+,-,*,/,%): ";
	cin >> userInput;
	cout << "Enter a clue for x: "
	cin >> x;
	cout << "Enter a clue for x: "
	cin >> y;

	switch (userInput)
	{
	case '+':
		cout << x + y;
		break;

	case '-':
		cout << x - y;
		break;

	case '*':
		cout << x * y;
		break;

	case '/':
		cout << x / y;
		break;

	case '%':
		cout << x % y;
		break;

	
	default:
		cout << "you fucked up";
		break;
	}
}
