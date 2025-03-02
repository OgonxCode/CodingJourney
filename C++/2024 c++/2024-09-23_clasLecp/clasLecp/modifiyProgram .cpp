#include <iostream>
#include <string>
using namespace std;

class ComplexNumbers {
private:


public:




};







class Rational
{
private:
    int numer;
    int denom;
public:
    int getNumer() const;
    int getDenom() const;
    void setNumer(int);
    void setDenom(int);
    void input();
    void output() const;
    Rational();
    Rational(int, int = 1);
    void reduce();
    //friend Rational operator+(const Rational& a, const Rational& b);
};
void Rational::reduce()
{
    int x = abs(numer);
    int y = abs(denom);
    // find minimum of x and y
    int min = x;
    if (y < x)
        min = y;
    // finding a common factor greater than 1
    int gcf = 1;
    for (int i = 2; i <= min; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            gcf = i;
        }
    }
    numer = numer / gcf;
    denom = denom / gcf;
    if (denom < 0)
    {
        numer = -numer;
        denom = -denom;
    }
}
Rational::Rational()
{
    numer = 0;
    denom = 1;
}
Rational::Rational(int x, int y)
{
    numer = x;
    if (y != 0)
        denom = y;
    else
        denom = 1;
    reduce();
}
int Rational::getNumer() const
{
    return numer;
}
int Rational::getDenom() const
{
    return denom;
}
void Rational::setNumer(int x)
{
    numer = x;
    reduce();
}
void Rational::setDenom(int x)
{
    denom = x;
    if (denom == 0)
        denom = 1;
    reduce();
}
void Rational::input()
{
    cout << "Numerator? ";
    cin >> numer;
    cout << "Denominator? ";
    cin >> denom;
    while (denom == 0)
    {
        cout << "Denominator can't be zero!\n";
        cout << "Denominator? ";
        cin >> denom;
    }
    reduce();
}
void Rational::output() const
{
    if (denom != 1)
    {
        if (numer < 0)
            cout << "-" << abs(numer) << "/" << denom << endl;
        else
            cout << numer << "/" << denom << endl;
    }
    else
        cout << numer << endl;
}

Rational operator+(Rational x,Rational  y) {
    Rational z;

    z.setDenom(x.getDenom() * y.getDenom());
    // b*c + a*d
    z.setNumer((x.getDenom() * y.getNumer()) + (y.getDenom() * x.getNumer()));

    return z;
}

Rational operator-(Rational x, Rational  y) {
    Rational z;

    z.setDenom(x.getDenom() * y.getDenom());
    // b*c - a*d
    z.setNumer((y.getDenom() * x.getNumer()) - (x.getDenom() * y.getNumer()));
    return z;
}

Rational operator/(Rational x, Rational  y) {
    Rational z;

    /*
    x1  *  y2
    x2     y1
    */

    z.setDenom(x.getNumer() * y.getDenom());
    // b*c + a*d
    z.setNumer(y.getNumer() * x.getDenom());

    return z;
}

Rational operator*(Rational x, Rational  y) {
    Rational z;

    z.setNumer(x.getNumer() * y.getNumer()); 
    z.setDenom(x.getDenom() * y.getDenom());

    return z;
}


bool operator <(Rational x, Rational  y) {
    Rational z;
    return ((x.getNumer() / x.getDenom()) < (y.getNumer() / y.getDenom()));   
}

// do < > <= >= == != 

bool operator >(Rational x, Rational  y) {
    Rational z;
    return ((x.getNumer() / x.getDenom()) > (y.getNumer() / y.getDenom()));
}

bool operator ==(Rational x, Rational  y) {
    Rational z;
    return ((x.getNumer() / x.getDenom()) == (y.getNumer() / y.getDenom()));
}

bool operator !=(Rational x, Rational  y) {
    Rational z;
    return ((x.getNumer() / x.getDenom()) != (y.getNumer() / y.getDenom()));
}

bool operator <=(Rational x, Rational  y) {
    Rational z;
    return ((x.getNumer() / x.getDenom()) <= (y.getNumer() / y.getDenom()));
}

bool operator >=(Rational x, Rational  y) {
    Rational z;
    return ((x.getNumer() / x.getDenom()) >= (y.getNumer() / y.getDenom()));
}


Rational operator+=(Rational& a, const Rational& b) {
    a = a + b;
    return a;
}

Rational operator-=(Rational& a, const Rational& b) {
    cout << "prior: ";
    a.output();
    b.output();
    a = a - b;
    cout << "\nIn funct: ";
    a.output();
    return a;
    
}

Rational operator*=(Rational& a, const Rational& b) {
    a = a * b;
    
    return a;
}

Rational operator/=(Rational& a, const Rational& b) {
    a = a / b;
    
    return a;
}


Rational& operator++(Rational& a) {
    a.setNumer(a.getNumer() + a.getDenom());
    return a; 
}

Rational operator++(Rational& a, int) {
    Rational temp = a; 
    a.setNumer(a.getNumer() + a.getDenom());
    return temp; 
}
int main()
{
    Rational a(1,2), b(1, 2), c, d;
    
    /*
    a.output();
    b.output();
    c.output();
    d.output();
    */



    cout << "+=: ";
    a += b;
    a.reduce();
    a.output();

    cout << "-=: ";
    a -= b;
    a.reduce();
    a.output();   

    cout << "*=: ";
    a *= b;
    a.reduce();
    a.output();

    cout << "/=: ";
    a /= b;
    a.reduce();
    a.output();

    cout << "b++: ";
    b++;
    b.output();
    

    return 0;
}