#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    
    double getReal() const { return real; }
    double getImag() const { return imag; }

    
    void setReal(double r) { real = r; }
    void setImag(double i) { imag = i; }

    
    void input() {
        cout << "enter real part: ";
        cin >> real;
        cout << "enter imaginary part: ";
        cin >> imag;
    }

    
    void output() const {
        cout << real << " + " << imag << "i" << endl;
    }

    
    friend Complex operator+(const Complex& c1, const Complex& c2) {
        return Complex(c1.real + c2.real, c1.imag + c2.imag);
    }

    
    friend Complex operator-(const Complex& c1, const Complex& c2) {
        return Complex(c1.real - c2.real, c1.imag - c2.imag);
    }

    
    friend Complex operator*(const Complex& c1, const Complex& c2) {
        return Complex(
            c1.real * c2.real - c1.imag * c2.imag,
            c1.real * c2.imag + c1.imag * c2.real
        );
    }

   
    friend bool operator==(const Complex& c1, const Complex& c2) {
        return (c1.real == c2.real && c1.imag == c2.imag);
    }

    
    friend bool operator!=(const Complex& c1, const Complex& c2) {
        return !(c1 == c2);
    }

   
    friend Complex& operator+=(Complex& c1, const Complex& c2) {
        c1.real += c2.real;
        c1.imag += c2.imag;
        return c1;
    }

    
    friend Complex& operator-=(Complex& c1, const Complex& c2) {
        c1.real -= c2.real;
        c1.imag -= c2.imag;
        return c1;
    }

    
    friend Complex& operator*=(Complex& c1, const Complex& c2) {
        double realPart = c1.real * c2.real - c1.imag * c2.imag;
        double imagPart = c1.real * c2.imag + c1.imag * c2.real;
        c1.real = realPart;
        c1.imag = imagPart;
        return c1;
    }

    
    friend Complex& operator++(Complex& c) {
        ++c.real;
        return c;
    }

    
    friend Complex& operator++(Complex& c, int) {
        Complex temp = c;
        c.real++;
        return temp;
    }

   
    friend Complex& operator--(Complex& c) {
        --c.real;
        return c;
    }

    
    friend Complex operator--(Complex& c, int) {
        Complex temp = c;
        c.real--;
        return temp;
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2), result;

    
    result = c1 + c2;
    result.output();  
    //expected output: 4 + 6i



    result = c1 - c2;
    result.output();  
    //expected output: 2 + 2i



    result = c1 * c2;
    result.output();  
    //expected output: -5 + 10i


    cout << (c1 == c2 ? "equal" : "not equal") << endl;
}
