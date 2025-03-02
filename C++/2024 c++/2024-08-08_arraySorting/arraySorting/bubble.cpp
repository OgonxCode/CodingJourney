/*
#include<iostream>

using namespace std;

void selectionSort(int insArr[], int size);

void bubbleSort(int insArr[], int size);

int main() {

	int arr[] = { 4,3,2,6,8,9 };
	int size = 5;
	selectionSort(arr, 5);

	bubbleSort(arr, 5);

	return 0;
}

void selectionSort(int insArr[], int size )
{
	for (int i = 0; i < size; i++) {

		int minIndex = i;
		for (int j = i + 1; j < size; j++) {
			if (insArr[j] < insArr[minIndex]) {
				minIndex = j;				
			}			

		}
		if (minIndex != i){
			int temp = insArr[i];
			insArr[i] = insArr[minIndex];
			insArr[minIndex] = temp;

		}
	}
	
	for (int i = 0; i < size; i++) {
		cout << insArr[i];
	}
}

void bubbleSort(int arr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		
		for (int j = 0; j < size - i - 1; j++) {
			
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

*/