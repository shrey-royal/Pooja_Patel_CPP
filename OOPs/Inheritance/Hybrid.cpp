#include <iostream>
using namespace std;

class Person {
public:
    void displayPerson() {
        cout << "I am a Person." << endl;
    }
};

class Student : public Person {
public:
    void displayStudent() {
        cout << "I am a Student." << endl;
    }
};

class Teacher : public Person {
public:
    void displayTeacher() {
        cout << "I am a Teacher." << endl;
    }
};

class TA : public Student, public Teacher {
public:
    void displayTA() {
        cout << "I am Teaching Assistant (TA)." << endl;
    }
};

int main() {
    TA ta;

    ta.displayTA();
    ta.displayStudent();
    ta.displayTeacher();

    ta.Teacher::displayPerson();

    return 0;
}