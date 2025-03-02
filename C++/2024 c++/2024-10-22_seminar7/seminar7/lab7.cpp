#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
	string employee;
	int employeeNumber;
	int yearHired;

public:

	string getName(Employee x) {
		return x.employee;
	}

	void setName(Employee x, string name) {
		x.employee = name;
	}

	int getEmpNumber(Employee x) {
		return x.employeeNumber;
	}

	void setEmpNum(Employee x, int EmpId) {
		x.employee = employeeNumber;
	}
	
	int getYearHired(Employee x) {
		return x.yearHired;
	}

	void setName(Employee x, int year) {
		x.yearHired = year;
	}
    
};

class ProductionWorker : public Employee{
private:
	int shift;
	double hourlyPay;

};



int main() {
	Employee Emp1;


}  