#include<iostream>
using namespace std;


class Person {
public:
    string name;
    int age;

    void initializePerson(string n, int a) {
        name = n;
        age = a;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};


class Student : public Person {
public:
    float percentage;

    void initializeStudent(string n, int a, float p) {
        initializePerson(n, a);
        percentage = p;
    }

    void displayStudent() {
        displayPerson();
        cout << "Percentage: " << percentage << "%" << endl;
    }
};


class Teacher : public Person {
public:
    float salary;

    void initializeTeacher(string n, int a, float s) {
        initializePerson(n, a);
        salary = s;
    }

    void displayTeacher() {
        displayPerson();
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    
    Student student;
    Teacher teacher;

    student.initializeStudent("Naksh Panchal", 25, 96.60);
    teacher.initializeTeacher("Darshan sir", 30, 35000);

    cout << "Student Details:" << endl;
    student.displayStudent();

    cout << "\nTeacher Details:" << endl;
    teacher.displayTeacher();

    return 0;
}