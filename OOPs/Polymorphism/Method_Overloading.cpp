#include <iostream>
using namespace std;

class Adder {
public:
    // By changing the datatype of arguments
    int add(int a, int b) {
        return a+b;
    }

    float add(float a, float b) {
        return a+b;
    }

    // By Changing the number of arguments
    int add(int a, int b, int c) {
        return a+b+c;
    }

    float add(float a, float b, float c) {
        return a+b+c;
    }
};

int main() {
    Adder obj;

    cout << obj.add(2, 3) << endl;
    cout << obj.add(2.3f, 3.1f) << endl;
    cout << obj.add(2, 3, 4) << endl;
    cout << obj.add(2.0f, 3.f, 5.1f) << endl;

    return 0;
}