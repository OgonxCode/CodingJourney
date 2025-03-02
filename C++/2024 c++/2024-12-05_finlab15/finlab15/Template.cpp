#include <iostream>
#include<vector>



using namespace std;

template<typename T>
class shapes {
private:
    int size = 8;
    T largestShape;
    vector<T> shapeStorage;
public:
    virtual int area() const = 0;
    
    void addToVector(vector<T> Tstorage, T shapeToAdd, int size) {
        if (Tstorage.size() < size) {
            Tstorage.push_back(shapeToAdd);
            cout << "added " << shapeToAdd << " to the element ";
        }
        else {
            cout << "the vector is full please remove an element"
        }
    }

    void RemoveFromVector(vector<T> Tstorage) {
        cout << "the last element " << Tstorage.back() << " will be removed";
        Tstorage.pop_back();
        cout << "the last element was removed";

    }

    void displayVector(vector<T> Tstorage, int Tsize) {
        for (int i = 0, i < Tsize, i++) {
            cout << Tstorage[i];
        }
    }

    T CalculateLargest(T firstArea, T secondArea) {
        if (firstArea > secondArea) {
            return firstArea;
        }
        else {
            return secondArea;
        }
    }


};

class circle : public shapes<int> {
private:
    int radius;
    const int PI = 3.14159;
    int area;
public:


    //setters 
    
    void setRadius(int Tradius) {
        radius = Tradius;
    }
    
    //getter 

    int getArea() {
        return area;
    }

    int getRadius() {
        return radius;
    }


    int area() override {
        return (radius * radius) * PI;
    }

    circle() {
        this->radius = 1;
    }

    circle(int Tradius) {
        try {
            if (Tradius >= 1) {
                this->radius = Tradius;
            }
            else {
                throw(Tradius);
            }
        }
        catch (int Tradius) {
            cout << " the number cannot be smaller than 1";
            cout << "the numer is Tradius" << endl;
        }

    }

    ~circle() {

    }
};

class rectangle : public shapes<int> {
private:
    int length;
    int width;
    int area;
public:

   
    //getter 

    int getArea() {
        return area;
    }

    int getlength() {
        return length;
    }

    int getwidth() {
        return width;
    }

    int area() override {
        return length * width;
    }

    rectangle() {
        length = 0;
        width = 0;
    }

    rectangle(int Tlength, int Twidth) {
        this->length = Tlength;
        this->width = Twidth;
    }

    ~rectangle() {
        // Add code here to free any dynamically allocated resources
    }
};

int main() {
    circle myCircle(5); // Initialize myCircle with radius 5
    rectangle myRectangle(5, 5); // Initialize myRectangle with length 5 and width 5
    }
