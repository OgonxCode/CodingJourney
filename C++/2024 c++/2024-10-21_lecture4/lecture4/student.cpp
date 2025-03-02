#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Person
{
private:
	string firstName;
	string lastName;
	string phoneNumber;
public:
	Person(string, string = " ", string = " ");
	Person();
	string getFirstName() const;
	string getLastName() const;
	string getPhoneNumber() const;
	void setFirstName(string);
	void setLastName(string);
	void setPhoneNumber(string);
	void input();
	void output() const;
};
Person::Person(string a, string b, string c)
{
	firstName = a;
	lastName = b;
	phoneNumber = c;
}
Person::Person()
{
	firstName = " ";
	lastName = " ";
	phoneNumber = " ";
	cout << "hello" << endl;
}
string Person::getFirstName() const
{
	return firstName;
}
string Person::getLastName() const
{
	return lastName;
}

string Person::getPhoneNumber() const
{
	return phoneNumber;
}

void Person::setFirstName(string x)
{
	firstName = x;
}
void Person::setLastName(string x)
{
	lastName = x;
}

void Person::setPhoneNumber(string x)
{
	phoneNumber = x;
}

void Person::input()
{
	cout << "\n---Please enter Person information---\n";
	cout << "First name: ";
	getline(cin, this->firstName);
	cout << "Last name: ";
	getline(cin, this->lastName);
	cout << "Phone Number: ";
	getline(cin, this->phoneNumber);

	cin.ignore();
}
void Person::output() const
{
	string temp;
	cout << left << setw(20) << firstName << setw(20) << lastName
		<< setw(15) << phoneNumber << endl;
}

class Student : public Person
{
private:
	double gpa;
public:
	double getGPA();
	void setGPA(double);
	Student();
};

double Student::getGPA(double x) {
	return gpa;
}

void Student::setGPA(double x)
{
	gpa = x;
}



int main()
{
	Person a("Jack");
	a.output();
	return 0;
}