#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main() {
	int randFloat;
	srand(time(NULL)

	randFloat = rand() % 15 + 5;

	cout << randFloat;

}