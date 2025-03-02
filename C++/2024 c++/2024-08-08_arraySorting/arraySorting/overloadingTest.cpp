/*
#include <iostream>

using namespace std;


void Overload(int *x);
string Overload(string x);

int main() {
	int num = 10;
	int *x = &num;
	Overload(x);
	
	cout << *x;
	cout << Overload("Mr.gangster");

	return 0;
}

void Overload(int *x)
{ 

	int y = 20;
	*x = y + 50;
}

string Overload(string x)
{
	x = "blatant";
	return x;
}
*/