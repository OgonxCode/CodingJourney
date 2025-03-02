#include<iostream>
#include<string>


using namespace std;


class person{
private:
	string name;
	string lastName;
	string address;

	
public:
	string getName() {
		return name;
	}
	
	string getLastName() {
		return lastName;
	}

	string getAddress() {
		return address;
	}

	person() {
	};
	person(string nameT, string lastNameT, string addressT) {
		name = nameT;
		lastName = lastNameT; 
		address = addressT;
	}
};




class customer : person {
private:
	string customerID;
	double balance;
public:

	string getCustomerID() {
		return customerID;
	}
	double getBalance() {
		return balance;
	}

	void setBalance(double amount) {
		balance = amount;
	}

	customer operator+(const double x) {
		if (x > 0) {
			balance += x;
		}
		else {
			cout << "cannot deposit a negative amount";
		}
		return *this;
	}

	customer operator-(const double x) {
		if (x > 0) {
			balance -= x;
		}
		else {
			cout << "cannot withdraw a negative amount";
		}
		return *this;
	}

	friend ostream& operator<<(ostream& os, const customer& customer){
		os << "Customer Name: " << customer.customerID << endl;
		os << "Balance: $" << customer.balance << endl;
	}
};



class customerManager : customer {
private:
	customer* customerArray;
public:

	~customerManager();

	customerManager(int initalSize);

	void addCustomer(const customer& newCustomer);
};

customerManager::~customerManager() {
	delete[] customerArray;
};

customerManager::customerManager(int initialSize)
	: size(initialSize), count(0) {
	customerArray = new customer[size];  // Allocate array with initialSize
}



int main() {



};

void customerManager::addCustomer(const customer& newCustomer)
{
};
