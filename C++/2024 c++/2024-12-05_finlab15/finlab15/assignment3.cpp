#include <iostream>

using namespace std;

template<typename T>

T arrayThing(T array[], int size) {
	T sum = 0;
	
	for (int i = 0; i < size; i++) {
		sum += array[i];
	}

	return sum;
}


int main() {
	
	int myArray[] = {1,2,3,4,5};

	cout << "the total is " << arrayThing(myArray, 5) << endl;
}