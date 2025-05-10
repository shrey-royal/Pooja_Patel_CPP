#include<iostream>
#include<exception>
using namespace std;

class MyException : public exception {
    const char* msg;
public:
    
    MyException() {
        this->msg = "My custom exception occurred!";
    }
    
    MyException(const char* msg) {
        this->msg = msg;
    }

    const char* what() const noexcept override {
        return msg;
    }
};

int main() {
    try {
        throw MyException();
    } catch(const exception& e) {
        cout << "Caught Exception: " << e.what() << endl;
    }

    return 0;
}