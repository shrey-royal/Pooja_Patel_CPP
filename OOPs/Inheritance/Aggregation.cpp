#include <iostream>
using namespace std;

class Address {
protected:
    string city;
    string state;

public:
    Address() {}

    Address(string city, string state) {
        this->city = city;
        this->state = state;
    }

    void getAddress() {
        cout << city << ", " << state << endl;
    }
};

class Employee {
    int empId;
    string empName;
    Address addr;    // HAS-A Relationship

public:
    Employee(int empId, string empName, Address addr) {
        this->empId = empId;
        this->empName = empName;
        this->addr = addr;
    }

    void getDetails() {
        cout << "EmpId: " << empId << endl;
        cout << "EmpName: " << empName << endl;
        cout << "Address: ";
        addr.getAddress();
    }
};

int main() {
    Address emp1_addr("Gandhinagar", "Gujarat");
    Address emp2_addr("Surat", "Gujarat");

    Employee emp1(101, "Rajesh", emp1_addr);
    Employee emp2(102, "Kinjal", emp2_addr);

    emp1.getDetails();
    emp2.getDetails();

    return 0;
}