#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

//prototypes
int findSize(string filename);
float findAverage(string filename, int size);
float findSD(string filename, int size, float avg);
void prettyPrint(int size,float avg, float SD);


int main() {
	string filename = "numbers.txt";
	int size = findSize(filename);
	float avg = findAverage(filename, size);
	float SD = findSD(filename, size, avg);
	prettyPrint(size,avg,SD);
	return 0;
}

// check the size of the file and return the size 
int findSize(string filename) {
	ifstream file(filename);
	int size = 0;
	float num;
	while (file >> num) {
		size++;
	}
	file.close();
	return size;
}
	
// find the average of the numbers in the file
float findAverage(string filename, int size) {
	ifstream file(filename);
	float num, sum = 0;
	while (file >>num) {
		sum += num;
	}
	file.close();
	return sum / size;
}
	
// finds the standard deviation of the numbers in the file
float findSD(string filename, int size, float avg) {
	ifstream file(filename);
	float num,sum = 0;
	while (file >> num) {
		sum += pow(num - avg,2);
	}
	file.close();
	return sqrt(sum / (size-1));
}

// pretty print the size, average, and standard deviation
void prettyPrint(int size, float avg, float SD) {
	cout << "#items Average SD" << endl;
	cout << size << " " << avg << " " << SD << endl;
}


