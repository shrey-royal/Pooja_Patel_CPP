#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
    string address;
    string phoneNumber;

public:
    // Default Constructor
    Person() {
        name = "";
        age = 0;
        address= "";
        phoneNumber = "";
        cout << "Default Constructor Called!" << endl;
    }

    // Parameterised Constructor
    Person(string n, int a, string addr, string phno) {
        name = n;
        age = a;
        address = addr;
        phoneNumber = phno;
        cout << "Parmeterized Constructor Called!" << endl;
    }

    // Copy Constructor
    Person(Person& obj) {
        name = obj.name;
        age = obj.age;
        address = obj.address;
        phoneNumber = obj.phoneNumber;
        cout << "Copy Constructor Called!" << endl;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "Phone Number: " << phoneNumber << endl;
    }
};

int main() {
    // Person p;   // default constructor
    // p.display();

    Person p1("Pooja", 12, "Aligarh", "1234567890");    // parameterised constructor
    p1.display();

    Person p2(p1);  // copy constructor
    p2.display();

    return 0;
}

/*
Constructor:
    A type of special method which is used to initialize the attribute in a class.s
    A constructor always invoked automatically when the object is created.
    There are 3 different types of constructor in cpp.
        - Default Constructor (Non-Parameterized)
        - Paramterized Constructor
        - Copy constructor

Rules to make a constructor:
    - The name of the constructor should be the same as it's class name.
    - There should be no return type defined while declaring the constructor
    - We can not call constructor explicitly

*/