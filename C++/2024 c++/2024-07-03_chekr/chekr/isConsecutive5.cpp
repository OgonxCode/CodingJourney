#include <iostream>

using namespace std;

//prototype
bool isConsecutive5(const int values[], int size);


int main() {
    int size;
    cout << "enter the number of values: ";
    cin >> size;
    int values[size];
    cout << "enter the values: ";
    for(int i = 0; i < size; i++) {
        cin >> values[i];
    }
    if (isConsecutive5(values, size)) {
        cout << "the list has consecutive 5s" << endl;
    } else {
        cout << "the list has no consecutive 5s" << endl;
    }
    return 0;
}

// check if there are 5 consecutive numbers in the list
bool isConsecutive5(const int values[], int size) {
    int count = 1;
    for (int i = 1; i < size; i++) {
        if(values[i] == values[i-1]) {
            count++;
            if(count == 5) {
                return true;
            }
        } else {
            count= 1;
        }
    }
    return false;
}
