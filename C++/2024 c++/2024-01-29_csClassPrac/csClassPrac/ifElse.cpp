#include<iostream>

int main() {
    using namespace std;
    float radius;
    float perimeter;
    float area;
    const float PI = 3.1415;
    int choice;

    cout << "please enter the radius of the circle: ";
    cin >> radius;
    cout << "Enter your choice 1 for perimeter or 2 for area: ";
    cin >> choice;

    area = radius * PI;
    perimeter = area * area;

    if (choice == 1) {
        
        cout << "The perimeter of the circle is " << perimeter << endl;
    }
    else {
        cout << "The area of the circle is " << area << endl;
    }
    //perimeter is pir^2
    // area is x times pi
}