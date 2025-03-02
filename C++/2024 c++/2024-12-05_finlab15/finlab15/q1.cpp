#include <iostream>

using namespace std;

template<typename findMax>
class MaxFinder {
private:
    maxFinder max;

public:
    MaxFinder(findMax Tarray[], int size) {
        findMax max;
        for (int i = 0; i < size - 1; i++) {
            if (Tarray[i] > Tarray[i + 1]) {
                max = Tarray[i];
            }
            else {
                max = Tarray[i+1];
            }
        }
        
    }

    T 
};

int main() {
    int Iarray[] = {1,2,3,4,5};
    double Darray[] = { 1,2,3,4,5 };
    int size = 5;

    MaxFinder<int> intMaxFinder(Iarray, size);
    cout << intMaxFinder.findMax() << endl;

    MaxFinder<double> doubleMaxFinder(Darray, size);
    cout << doubleMaxFinder.findMax() << endl;

    return 0;
}
