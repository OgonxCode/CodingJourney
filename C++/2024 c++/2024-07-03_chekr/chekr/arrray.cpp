#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
	
int findSize(string filename);
float findAverage(string filename, int size);
float findSD(string filename, int size, float avg);
void prettyPrint(int size, float avg, float SD);

int main()
{
	string filename;
	cout << "Enter the name of the file: ";
	cin >> filename;
	int size = findSize(filename);
	float avg = findAverage(filename, size);
	float SD = findSD(filename, size, avg);
	prettyPrint(size, avg, SD);
	return 0;
}

int findSize(string filename)
{
	ifstream file;
	file.open(filename);
	if (!file)
	{
		cout << "Error opening file" << endl;
		exit(1);
	}
	float num;
	int count = 0;
	while (file >> num)
	{
		count++;
	}
	file.close();
	return count;
}

float findAverage(string filename, int size)
{
	ifstream file;
	file.open(filename);
	if (!file){
		cout << "Error opening file" << endl;
		exit(1);
	}
	float num;
	float sum = 0;
	while (file >> num)
	{
		sum += num;
	}
	file.close();
	return sum / size;
}

float findSD(string filename, int size, float avg)
{
	ifstream file;
	file.open(filename);
	if (!file)
	{
		cout << "Error opening file" << endl;
		exit(1);
	}
	float num;
	float sum = 0;
	while (file>> num)
	{
		sum += pow(num - avg, 2);
	}
	file.close();
	return sqrt(sum / (size - 1));
}

void prettyPrint(int size, float avg, float SD)
{
	cout << setw(6) << "#items" << setw(8) << "Average" << setw(8) << "SD" << endl;
	cout << setw(6) << size << setw(8) << fixed << setprecision(2) << avg << setw(8) << fixed << setprecision(2) << SD << endl; }



