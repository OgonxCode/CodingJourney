#include <iostream>
#include <vector>
#include <cmath> 
using namespace std;






class Vector2D {
private:
    double x;
    double y;


public:
    //setters
    void setX(double newX) {
        x = newX;
    }
    void setY(double newY) {
        y = newY;
    }

    //getters
    double getX() const {
        return x;
    }
    double getY() const {
        return y;
    }

    Vector2D(double initialX,double initialY) : x(initialX), y(initialY) {}

    //operator overloads
    Vector2D operator+(const Vector2D& v) const {
        return Vector2D(x + v.x, y + v.y);
    }

    Vector2D operator-(const Vector2D& v) const {
        return Vector2D(x - v.x, y - v.y);
    }





    //prefix
    Vector2D& operator--() {
        --x;   --y;
        return *this;
    }

    Vector2D& operator++() {
        ++x;   ++y;
        return *this;
    }

    //postfix
    Vector2D operator--(int) {
        Vector2D temp = *this;
        --(*this);
        return temp;
    }


    Vector2D operator++(int) {
        Vector2D temp = *this;
        ++(*this);
        return temp;
    }

    //friend funcs
    friend bool operator<=(const Vector2D& v1,const Vector2D& v2);
    friend bool operator<(const Vector2D& v1,const Vector2D& v2);
    friend bool operator>=(const Vector2D& v1,const Vector2D& v2);
    friend bool operator>(const Vector2D& v1,const Vector2D& v2);


    double magnitude() const {
        return sqrt(x * x + y * y);
    }
};

//overload == and != operators
bool operator==(const Vector2D& v1, const Vector2D& v2) {
    return (v1.getX() == v2.getX()) && (v1.getY() == v2.getY());
}

bool operator!=(const Vector2D& v1, const Vector2D& v2) {
    return !(v1 == v2);
}

//overload comparison operators
bool operator>(const Vector2D& v1, const Vector2D& v2) {
    return v1.magnitude() > v2.magnitude();
}



bool operator>=(const Vector2D& v1, const Vector2D& v2) {
    return v1.magnitude() >= v2.magnitude();
}


bool operator<(const Vector2D& v1, const Vector2D& v2) {
    return v1.magnitude() < v2.magnitude();
}

bool operator<=(const Vector2D& v1, const Vector2D& v2) {
    return v1.magnitude() <= v2.magnitude();
}






int main() {
    Vector2D vector1(4, 5);
    Vector2D vector2(8, 9);
    Vector2D resultAdd = vector1 + vector2; 
    Vector2D resultSub = vector1 - vector2; 
    cout << "result of Addition: (" << resultAdd.getX() << ", " << resultAdd.getY() << ")\n";
    cout << "result of Subtraction: (" << resultSub.getX() << ", " << resultSub.getY() << ")\n";

    return 0;
}
