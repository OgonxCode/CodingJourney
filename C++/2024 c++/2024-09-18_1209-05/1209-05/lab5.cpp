#include <iostream>
#include <cmath>
using namespace std;

class Rational
{
private:
    int numerator;
    int denominator;

public:
    Rational();
    Rational(int num);
    Rational(int num, int denom);
    void setNumerator(int num);
    void setDenominator(int denom);
    int getNumerator();
    int getDenominator();
    void input();
    void output();
    int gcd(int a, int b);
    void reduce();
};

Rational::Rational()
{
    numerator = 0;
    denominator = 1;
}

Rational::Rational(int num)
{
    numerator = num;
    denominator = 1;
    reduce(); 
}

Rational::Rational(int num, int denom)
{
    numerator = num;
    if (denom == 0)
    {
        denominator = 1;
    }
    else
    {
        denominator = denom;
    }
    reduce();  
}

void Rational::setNumerator(int num)
{
    numerator = num;
    reduce();  
}

void Rational::setDenominator(int denom)
{
    if (denom == 0)
    {
        denominator = 1;
    }
    else
    {
        denominator = denom;
    }
    reduce();  
}

int Rational::getNumerator()
{
    return numerator;
}

int Rational::getDenominator()
{
    return denominator;
}

void Rational::input()
{
    int tempInt = 1;
    cout << "Enter the numerator: ";
    cin >> numerator;
    cout << "Enter the denominator: ";
    cin >> tempInt;

    while (tempInt == 0)
    {
        cout << "Denominator cannot be zero. Please re-enter the denominator: ";
        cin >> tempInt;
    }

    denominator = tempInt;
    reduce();  
}

void Rational::output()
{
    int tempNumerator = numerator;
    int tempDenominator = denominator;

    if (tempNumerator < 0 && tempDenominator < 0)
    {
        tempNumerator = abs(tempNumerator);
        tempDenominator = abs(tempDenominator);
    }

    cout << tempNumerator << "/" << tempDenominator;
}

int Rational::gcd(int a, int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void Rational::reduce()
{
    int common = gcd(abs(numerator), abs(denominator));
    numerator = numerator / common;
    denominator = denominator / common;

    
    if (denominator < 0)
    {
        numerator = -numerator;
        denominator = -denominator;
    }
}

int main()
{
    Rational a, b(6), c(-6, -8), d(9, -6);
    cout << "a = ";
    a.output();
    cout << endl;
    cout << "b = ";
    b.output();
    cout << endl;
    cout << "c = ";
    c.output();
    cout << endl;
    cout << "d = ";
    d.output();
    cout << endl;

    d.setNumerator(3);
    d.setDenominator(4);
    d.output();
    cout << endl;

    cout << d.getNumerator() << "/" << d.getDenominator() << endl;

    d.input();
    d.output();
    cout << endl;

    d.reduce();  
    d.output();
    cout << endl;

    return 0;
}
