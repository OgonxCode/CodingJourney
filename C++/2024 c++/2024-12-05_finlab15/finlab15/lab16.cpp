#include<iostream>

using namespace std;

class DenoException : public logic_error {
private:
    int deno;
public:
    DenoException(int deno) : logic_error("Invalid deno value") {
        this->deno = deno;
    }

    int getDeno() const {
        return deno;
    }
};

class rational {
private:
    int numer;
    int deno;

public:

    int getNumer() {
        return numer;
    }

    int getDeno() {
        return deno;
    }

    void setNumer(int Tnumer) {
        numer = Tnumer;
    }

    void setDeno(int Tdeno) {
        if (Tdeno == 0) {
            throw DenoException(Tdeno);
        }
        deno = Tdeno;
    }

    bool isValid(int denT) const {
        if (denT < 0) {
            return false;
        }
        else { return true; }
    }
};

int main() {
    rational Rational1;

    int TempNumer;
    int TempDeno;
    try {
        cout << "please enter the numerator: ";
        cin >> TempNumer;
        Rational1.setNumer(TempNumer);


        cout << "please enter the Denomonator: ";
        cin >> TempDeno;
        Rational1.setDeno(TempDeno);

    }
    catch (DenoException &e)
    {
        cout << "deno cannot be 0";
    }
}