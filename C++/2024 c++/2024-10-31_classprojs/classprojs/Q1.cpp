#include <iostream>
#include <string>
using namespace std;

class PersonData {
private:
    string lastName, firstName, address, city, state, zip, phone;
public:
    //accessors and mutators for each member variable
    void setLastName(const string& ln) { lastName = ln; }
    string getLastName() const { return lastName; }

    void setFirstName(const string& fn) { firstName = fn; }
    string getFirstName() const { return firstName; }

    void setAddress(const string& addr) { address = addr; }
    string getAddress() const { return address; }

    void setCity(const string& c) { city = c; }
    string getCity() const { return city; }


    void setState(const string& s) { state = s; }
    string getState() const { return state; }

    void setZip(const string& z) { zip = z; }
    string getZip() const { return zip; }

    void setPhone(const string& ph) { phone = ph; }
    string getPhone() const { return phone; }
};

class CustomerData : public PersonData {
private:
    int customerNumber;
    bool mailingList;
public:
    //accessors and mutators
    void setCustomerNumber(int cn) { customerNumber = cn; }
    int getCustomerNumber() const { return customerNumber; }

    void setMailingList(bool ml) { mailingList = ml; }
    bool getMailingList() const { return mailingList; }
};

class PreferredCustomer : public CustomerData {
private:
    double purchasesAmount;
    double discountLevel;
public:
    PreferredCustomer() : purchasesAmount(0.0), discountLevel(0.0) {}

    void setPurchasesAmount(double amount) {
        if (amount < 0) {
            cout << "error: purchase amount cannot be negative.\n";
            return;
        }
        purchasesAmount = amount;
        updateDiscountLevel(); //update discount level whenever purchases change
    }
    double getPurchasesAmount() const { return purchasesAmount; }

    double getDiscountLevel() const { return discountLevel; }

    void updateDiscountLevel() {
        if (purchasesAmount >= 2000) discountLevel = 0.10;
        else if (purchasesAmount >= 1500) discountLevel = 0.07;
        else if (purchasesAmount >= 1000) discountLevel = 0.06;
        else if (purchasesAmount >= 500) discountLevel = 0.05;
        else discountLevel = 0.0;
    }
};

int main() {
    PreferredCustomer customer;

    customer.setFirstName("ariya");
    customer.setLastName("kawamura");
    customer.setAddress("5250 rupert st");
    customer.setCity("Vancouver");
    customer.setState("BC");
    customer.setZip("V5R2J9");
    customer.setPhone("604-365-8230");

    customer.setCustomerNumber(1001);
    customer.setMailingList(true);

    customer.setPurchasesAmount(1500.0);

    cout << "customer information:\n";
    cout << "name: " << customer.getFirstName() << " " << customer.getLastName() << endl;
    cout << "address: " << customer.getAddress() << ", " << customer.getCity() << ", "
        << customer.getState() << " " << customer.getZip() << endl;
    cout << "phone: " << customer.getPhone() << endl;
    cout << "customer number: " << customer.getCustomerNumber() << endl;
    cout << "mailing list: " << (customer.getMailingList() ? "yes" : "no") << endl;
    cout << "purchases amount: $" << customer.getPurchasesAmount() << endl;
    cout << "discount level: " << customer.getDiscountLevel() * 100 << "%" << endl;

    return 0;
}
