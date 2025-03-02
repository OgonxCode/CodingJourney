#include <iostream>

using namespace std;

template<typename T>

T addArray(T array[], int size) {

	T sum = 0;

	for (int i = 0; i < size; i++) {
		sum += array[i];
	}

	return sum;

}

int main() {
	int array[] = { 1,2,3,4,5 };
	int size = 5;

	cout << "the sum of array =" << addArray(array, size);

}