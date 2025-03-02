/*
#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	bool run = true;
	while(run == true){
		cout << "Enter two numbers: ";
		double a, b;
		cin >> a >> b;
		cout << "Enter an operator (+, -, *, /, %) or q to quit: ";
		char op;
		cin >> op;
		if(op == 'q'){
			cout << "Quitting" << endl;
			run = false;
		}else{
			double result;
			switch(op){
				case '+':
					result = a + b;
					break;
				case '-':
					result = a - b;
					break;
				case '*':
					result = a * b;
					break;
				case '/':
					result = a / b;
					break;
				case '%':
					result = (int)a % (int)b;
					break;
				default:
					cout << "Invalid operator. Try again." << endl;
					break;
			}
			cout << "Result: " << fixed << setprecision(2) << result << endl;
		}
	}
	return 0;
}*/