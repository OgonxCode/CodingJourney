


#include<iostream>
#include<stdexcept>

using namespace std;

struct Vector {
	
	int* dynArray;
	int capacity;
	int vecSize;

	int invInd;
	int invInd2;
	int invIndSize;

	Vector() {
		capacity = 2;
		vecSize = 0;
		dynArray = new int[capacity];

		invInd = 4;
		invInd2 = -1;
		invIndSize = 10;
	}
	~Vector() {
		delete[] dynArray;
	}
};

void resize(Vector& v) {
	v.capacity = v.capacity * 2;
	int* dynArray2 = new int[v.capacity];

	for (int i = 0; i < v.vecSize; ++i)
	{
		dynArray2[i] = v.dynArray[i];
	}
	delete[] v.dynArray;

	v.dynArray = dynArray2;
}


void add(Vector& v, int item){

		if (v.vecSize == v.capacity) {
			resize(v);				
		}
		else {
			v.dynArray[v.vecSize] = item;
			v.vecSize++;
		}	
}

void remove(Vector& v, int index){
	cout << "Tried to remove element in index " << index << endl;

	if (index < 0 || index >= v.vecSize) {
		throw out_of_range("Index out of range");
	}
	int removedItem = v.dynArray[index];
	for (int i = index; i < v.vecSize - 1; ++i) {
		v.dynArray[i] = v.dynArray[i + 1];
	}
	--v.vecSize;

	
}

void set(Vector& v, int index, int value)
{
	cout << "Tired to set index " << value << " value to " << index << endl;

	if (index < 0 || index >= v.vecSize) {
		throw out_of_range("Index out range");
	}

	v.dynArray[index] = value;
	
	
}

void print(Vector& v) {

		cout << "Vector capacity: " << v.capacity << ",  Vector size : " << v.vecSize;
		cout << "\n" << " [";
		for (int i = 0; i < v.capacity; ++i) {
			if (i < v.vecSize) {
				cout << v.dynArray[i] << ", ";
			}
			
		}
		cout << "]" << "\n";
		cout << endl;	
}

int main() {
	Vector v;

	print(v);

	add(v, 10);
	add(v, 20);
	add(v, 30);
	add(v, 40);
	print(v);

	
	add(v, 50);
	print(v);

	
	set(v, 2, 100);
	print(v);

	
	print(v);

	
	remove(v, 1);
	print(v);

	
	print(v);

	

	//call set function with a invalid index
	try {
		set(v, v.invIndSize, v.invInd2);
	}
	catch (const out_of_range& e) {
		
		cout << "Error, set action with invalid index: " << v.invInd2 << "\n" << endl;
	}


	// call remove with a invallid index
	try {
		
		remove(v, v.invInd);
	} catch (const out_of_range& e){
		
		cout << "Error, remove action with invalid index: " << v.invInd  << "\n" << endl;
	}

	cout << "Done!" << endl;

	return 0;
}
