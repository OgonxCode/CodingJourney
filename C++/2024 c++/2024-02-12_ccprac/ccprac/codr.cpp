#include<iostream>
using namespace std;
double calculateAverage(double num1,double num2) {
	return(num1 + num2) / 2;
}


int main() {
	double g1;
	double g2;
	cout << "enter your first grade" << endl;
	cin >> g1;
	cout << "enter your second grade" << endl;
	cin >> g2;

	cout << calculateAverage(g1, g2);

}