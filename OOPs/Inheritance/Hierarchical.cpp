#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string name, int age) : name(name), age(age) {
        cout << "Person constructor called for " << name << endl;
    }

    void personInfo() {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

class Student : public Person {
private:
    string major;

public:
    Student(string name, int age, string major) : Person(name, age), major(major) {
        cout << "Student constructor called for " << name << endl;
    }

    void studentInfo() {
        personInfo();
        cout << "Major: " << major << endl;
    }
};

class Teacher : public Person {
private:
    string subject;

public:
    Teacher(string name, int age, string subject) : Person(name, age), subject(subject) {
        cout << "Teacher constructor called for " << name << endl;
    }

    void teacherInfo() {
        personInfo();
        cout << "Subject: " << subject << endl;
    }
};

class Staff : public Person {
private:
    string department;

public:
    Staff(string name, int age, string department) : Person(name, age), department(department) {
        cout << "Staff constructor called for " << name << endl;
    }

    void staffInfo() {
        personInfo();
        cout << "Department: " << department << endl;
    }
};

int main() {
    Student s("Alice", 20, "Computer Science");
    cout << "\nStudent Info: \n";
    s.studentInfo();

    Teacher t("Mr. Bob", 40, "Mathematics");
    cout << "\nTeacher Info: \n";
    t.teacherInfo();

    Staff st("Linda", 35, "Administration");
    cout << "\nStaff Info: \n";
    st.staffInfo();

    return 0;
}