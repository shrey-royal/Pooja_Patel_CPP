#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int id;

    void displayDetails() {
        cout << "Name: " << name << ", ID: " << id << endl;
    }

public:
    Employee(string empName, int empId) {
        name = empName;
        id = empId;
    }
};

class Developer : public Employee {
public:
    Developer(string empName, int empId, string lang) : Employee(empName, empId) {
        programmingLangauge = lang;
    }

    void showDeveloperDetails() {
        displayDetails();
        cout << "Programming Language: " << programmingLangauge << endl;
    }

private:
    string programmingLangauge;
};

int main() {
    Developer dev("Alice Johnson", 1001, "C++");
    dev.showDeveloperDetails();

    return 0;
}