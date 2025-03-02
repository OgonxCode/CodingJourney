
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {

    srand(time(0));

    int randInt = rand() % (15- 5 + 1) + 5;
    cout << "random integer: " << randInt << endl;

    float randFloat = static_cast<float>(rand()) / RAND_MAX * 99.99;
    cout << "random float: " << randFloat << endl;

    char letter;
    int upOrLow = rand() % 2; 

    if (upOrLow == 0) {

        letter = rand() % 26 + 'A'; 
    } else {

        letter = rand() % 26 + 'a'; 
    }

    cout << "your letter is " << letter << endl;

    return 0;
} 