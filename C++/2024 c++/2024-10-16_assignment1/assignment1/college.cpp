#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>


using namespace std;



class Student {

private:

    string firstName;
    string lastName;
    string studentID;
    string phoneNumber;
    double gpa;

public:
    //default constructor
    Student(): firstName(""),lastName(""),studentID(""),phoneNumber(""),gpa(){}

    //parameter constructor
    Student(string fName,string lName,string id,string phone,double gpaValue)
        : firstName(fName),lastName(lName),studentID(id),phoneNumber(phone),gpa(gpaValue) {}

    //accessors
    string getFirstName() const {return firstName;}
    string getLastName() const {return lastName;}
    string getStudentID() const {return studentID;}
    string getPhoneNumber() const {return phoneNumber;}
    double getGPA() const { return gpa;}


    //mutators
    void setFirstName(const string& fName) { firstName= fName;}
    void setLastName(const string& lName) { lastName= lName;}
    void setStudentID(const string& id) { studentID= id;}
    void setPhoneNumber(const string& phone) { phoneNumber = phone;}
    void setGPA(double gpaValue) { gpa = gpaValue;}

    //input function
    void input() {
        cout << "Enter first name: ";
        cin >> firstName;
        cout << "Enter last name: ";
        cin >> lastName;
        cout << "Enter student ID: ";
        cin >> studentID;
        cout << "Enter phone number (format 604-555-5555): ";
        cin >> phoneNumber;
        cout << "Enter GPA: ";
        cin >> gpa;
    }
    //output function
    void output() const {
       cout << "Name: "<< firstName << " " << lastName << endl;
       cout << "Student ID: " << studentID << endl;
       cout << "Phone Number: " << phoneNumber << endl;
       cout << "GPA: "<< fixed << setprecision(2) << gpa <<endl;
    }
};





class Course {
private:
    string code;
    int section;
    int capacity;
    int numStudents;
    Student* list;//pointer

public:
    //default constructor
    Course() : code("CMPT 1209"), section(1), capacity(35), numStudents(0) {
        list = new Student[capacity];
    }
    //parameterized constructor
    Course(string courseCode, int sec, int cap)
        : code(courseCode), section(sec),capacity(cap), numStudents(0) {
        list = new Student[capacity];
    }

    //destructor
    ~Course() {
        delete[] list;
    }

    //accessor
    string getCode() const { return code; }
    int getSection() const { return section; }
    int getCapacity()const { return capacity; }
    int getNumStudents() const { return numStudents; }

    //mutators
    void setCode(const string& courseCode) { code = courseCode; }
    void setSection(int sec) { section = sec; }

    //function to add a student
    void add(const Student& student) {
        if (numStudents < capacity) {
            list[numStudents++] = student;
        }
        else {
            cout << "Cannot add student: Course is full." << endl;
        }
    }

    //function to display student
    void display() const {
        for (int i = 0; i < numStudents; i++) {
            list[i].output();
            cout << "-----------------------------" << endl;
        }

    }

    //function to display by first name
    void displayByFirst(const string& firstName) const {
        for (int i = 0; i < numStudents; i++) {
            if (list[i].getFirstName() == firstName) {
                list[i].output();
                return;
            }
        }
        cout << "Student with first name " << firstName << " not found." << endl;
    }

    //function to display by last name
    void displayByLast(const string& lastName) const {
        for (int i = 0; i < numStudents; i++) {
            if (list[i].getLastName() == lastName) {
                list[i].output();
                return;
            }
        }
        cout << "Student with last name " << lastName << " not found." << endl;
    }


    //function to display by ID
    void displayByID(const string& studentID) const {
        for (int i = 0; i < numStudents; i++) {
            if (list[i].getStudentID() == studentID) {
                list[i].output();
                return;
            }
        }
        cout << "Student with ID " << studentID << " not found." << endl;

    }



    //function to display by phone number
    void displayByPhone(const string& phoneNumber) const {
        for (int i = 0; i < numStudents; i++) {
            if (list[i].getPhoneNumber() == phoneNumber) {
                list[i].output();
                return;
            }

        }
        cout << "Student with phone number " << phoneNumber << " not found." << endl;
    }


    //function to remove a student by phone number
    void remove(const string& phoneNumber) {
        for (int i = 0; i < numStudents; i++) {

            if (list[i].getPhoneNumber() == phoneNumber) {
                for (int j = i; j < numStudents - 1; j++) {
                    list[j] = list[j + 1];  // Shift students left
                }
                numStudents--;
                cout << "Student with phone number " << phoneNumber << " removed." << endl;
                return;
            }
        }
        cout << "Student with phone number " << phoneNumber << " not found." << endl;
    }




    //sorting functions
    void sortByFirstAsc() {
        sort(list,list + numStudents,[](const Student& a, const Student& b){
            return a.getFirstName() < b.getFirstName();
            });
    }
    void sortByFirstDes() {
        sort(list, list + numStudents, [](const Student& a, const Student& b){
            return a.getFirstName() > b.getFirstName();
            });
    }
    void sortByLastAsc() {
        sort(list, list + numStudents, [](const Student& a, const Student& b){
            return a.getLastName() < b.getLastName();
            });
    }


    void sortByLastDes() {
        sort(list, list + numStudents, [](const Student& a, const Student& b){
            return a.getLastName() > b.getLastName();
            });
    }

    void sortByIDAsc() {
        sort(list, list + numStudents, [](const Student& a, const Student& b){
            return a.getStudentID() < b.getStudentID();
            });
    }
    

    void sortByIDDes() {
        sort(list, list + numStudents, [](const Student& a, const Student& b){
            return a.getStudentID() > b.getStudentID();
            });
    }


    void sortByPhoneAsc() {
        sort(list, list + numStudents,[](const Student& a, const Student& b){
            return a.getPhoneNumber() < b.getPhoneNumber();
           });
    }

    void sortByPhoneDes() {
        sort(list, list + numStudents, [](const Student& a, const Student& b){
            return a.getPhoneNumber() > b.getPhoneNumber();
            });
    }
    

    void sortByGPAAsc() {
        sort(list, list + numStudents, [](const Student& a, const Student& b){
            return a.getGPA() < b.getGPA();
            });
    }

    void sortByGPADes() {
        sort(list, list + numStudents,[](const Student& a, const Student& b){
            return a.getGPA() > b.getGPA();
          });
    }
};






int main() {
    Course course("CMPT1200", 1, 35);


    //adding some students for testing
    Student student1("John", "Doe", "", "300534522", 1.5);
    Student student2("Jane", "Smith", "300559432", "604-555-2222", 3.9);
    Student student3("ariya", "kawamura", "300391858", "604-555-3333", 3.02);
    course.add(student1);
    course.add(student2);
    course.add(student3);  
    
    

    cout << "All Students:\n";
    course.display();  
    cout << "Display by first name (John):\n";
    course.displayByFirst("John");
    cout << "Display by last name (Smith):\n";
}