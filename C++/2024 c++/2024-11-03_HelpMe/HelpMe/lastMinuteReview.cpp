#include<iostream>
#include<string>

using namespace std;

class student {
private:
	string firstName;
	string lastName;
	string studentID;
	string phoneNumber;
	double gpa;

public:

	student(){
		firstName = " ";
		lastName = " ";
		studentID = " ";
		phoneNumber = " ";
		gpa = 0;
	}

	student(string firstT, string lastT, string studentIDT, string phoneNumberT, double GPAT) {
		firstName = firstT;
		lastName = lastT;
		studentID = studentIDT;
		phoneNumber = phoneNumberT;
		gpa = GPAT;
	}

	//getters
	string getFirstName() {
		return firstName;
	}

	string getLastName() {
		return lastName;
	}

	string getStudentID() {
		return studentID;
	}

	string getPhoneNumber() {
		return phoneNumber;
	}

	double getGPA() {
		return gpa;
	}

	//setters

	void setFirstName(const string name) {
		firstName = name;
	}

	void setLastName(const string name) {
		lastName = name;
	}

	void setStudentID(const string ID) {
		studentID = ID;
	}

	void setPhoneNumber(const string phoneNumberT) {
		phoneNumber = phoneNumberT;
	}

	void setGPA(const double Tgpa) {
		gpa = Tgpa;
	}

	void Input() {
		cout << "please enter your first name: " << endl;
		cin >> firstName;
		cin.ignore();
		cout << "please enter your last name: " << endl;
		cin >> lastName;
		cin.ignore();
		cout << "please enter your student number: " << endl;
		cin >> studentID;
		cin.ignore();
		cout << "please enter your phone number: " << endl;
		cin >> phoneNumber;
		cin.ignore();
		cout << "please enter your gpa: " << endl;
		cin >> gpa;
	}

	void output() const {
		cout << "name: " << firstName << " " << lastName << " student number " << studentID << endl;
		cout << "students contact information is: " << phoneNumber << endl;
		cout << "and students gpa is at: " << gpa << endl;
	}

	
};

class course {
private:
	string courseCode;
	string section;
	int capacity;
	int numStudents;
	student* douglasRoyals;

public: 

	course() {
		courseCode = " ";
		section = " ";
		capacity = 35;
		numStudents = 0;
		douglasRoyals = new student[capacity];
	}

	course(string courseT, string sectionT, int capacityT, int numStudentsT) {
		courseCode = courseT;
		section = sectionT;
		capacity = capacityT;
		numStudents = numStudentsT;
		douglasRoyals = new student[capacity];
	}

	~course() {
		delete[] douglasRoyals;
	}

	void enrollStudents(const student& studentToAdd) {
		if (numStudents < capacity) {
			douglasRoyals[numStudents++] = studentToAdd;
			cout << "student: " << douglasRoyals[numStudents-1].getFirstName() << " has been enrolled" << endl;
		}
		else {
			cout << "cannot add anymore students the class is full sorry.";
		}
	}

	void outputAllStudents() const {
		cout << "The student in the class are: ";
		for (int i = 0; i < numStudents; i++) {
			cout << "number: " << i << " student information is: \n";
			douglasRoyals[i].output();
			cout << endl;
		}
	}
};


int main() {
	course myCourse("cmpt1209", "A", 50, 30);

	student s1("John", "Doe", "S1234", "604-123-4567", 3.5);
	student s2("Jane", "Smith", "S5678", "604-987-6543", 3.8);

	myCourse.enrollStudents(s1);
	myCourse.enrollStudents(s2);

	// Display all enrolled students
	myCourse.outputAllStudents();

	return 0;
};