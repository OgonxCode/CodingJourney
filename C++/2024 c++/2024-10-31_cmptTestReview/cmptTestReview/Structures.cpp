/*#include<iostream>

using namespace std;

class student {
public:
	int studentID;
	string name;
	short yearInSchool;
	double gpa;

	void addStudent(student& s) {
		cout << "please enter your name: ";
		cin >> s.name;
		cin.ignore();

		cout << "please enter your student id: ";
		cin >> s.studentID;

		cout << "please enter how many years you have been enrolled: ";
		cin >> s.yearInSchool;

		cout << "please enter your GPA: ";
		cin >> s.gpa;

	}

	void displayStudent(student& s)
	{
		cout << "The students name is " << s.name << endl;
		cout << "The students gpa is: " << s.gpa << endl;
		cout << "the amount of years in school is " << s.yearInSchool << endl;
		cout << "the students gpa is " << s.gpa << endl;
	}
private:
};

int main() {
	const int NUM_OF_STUDENTS = 3;

    student firstClass[NUM_OF_STUDENTS];
	
	for (int i = 0; i < NUM_OF_STUDENTS; i++) {
		firstClass[i].addStudent(firstClass[i]);
	}

	for (int i = 0; i < NUM_OF_STUDENTS; i++) {
		firstClass[i].displayStudent(firstClass[i]);
	}
}

*/