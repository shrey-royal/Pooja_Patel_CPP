#include <iostream>
using namespace std;

class Student {
    // properties
    public:
    int rollNo;
    string name;
    string hobby;

    // methods
    // public:
    void introduce() {
        cout << "Hello all, My name is " << name << ". ";
        cout << "My Roll No is " << rollNo << ". ";
        cout << "And, my hobby is " << hobby << endl;
    }
};

class CalculateDiscount {
private:
    float discount;

public:
    void setDiscount(float discount_percentage) {
        discount = discount_percentage;
    }

    double getDiscount(double price) {
        return price - (price * discount/100);
    }
};

int main() {
    // Object Creation
    Student student;

    student.rollNo = 123;
    student.name = "Rajesh";
    student.hobby = "Listening to Music";

    student.introduce();

    CalculateDiscount cd;

    cd.setDiscount(10);
    cout << "Discounted Price: " << cd.getDiscount(100) << endl;

    return 0;
}