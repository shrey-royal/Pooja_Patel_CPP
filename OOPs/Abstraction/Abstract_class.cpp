#include<iostream>
using namespace std;

// Abstract class
class PaymentMethod {
public:
    virtual void processPayment(double amount) = 0; // pure virtual function

    void fun() {
        cout << "fun" << endl;
    }

    PaymentMethod() {
        cout << "Constructor called" << endl;
    }

    ~PaymentMethod() {
        cout << "destructor called" << endl;
    }
};

class CreditCard : public PaymentMethod {
public:
    void processPayment(double amount) override {
        cout << "Processing credit card payment of Rs." << amount << endl;
    }
};

class GPay : public PaymentMethod {
public:
    void processPayment(double amount) override {
        cout << "Processing GPay payment of Rs." << amount << endl;
    }
};

class Bitcoin : public PaymentMethod {
public:
    void processPayment(double amount) override {
        cout << "Processing Bitcoin payment of $" << amount << endl;
    }
};

int main() {
    PaymentMethod *obj;

    obj = new CreditCard();
    obj->processPayment(1000);
    obj->fun();
    delete obj;

    obj = new GPay();
    obj->processPayment(2000);
    obj->fun();
    delete obj;

    obj = new Bitcoin;
    obj->processPayment(10);
    obj->fun();
    delete obj;

    return 0;
}