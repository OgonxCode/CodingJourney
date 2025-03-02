#include<iostream>
#include<fstream>

using namespace std;

int main() {
	ofstream myFile;
	myFile.open("testFile.txt");
	int sum = 0,x;
	while (myFile.eof()) {
		sum += 0;
	}
	myFile.close();


	return 0;
}