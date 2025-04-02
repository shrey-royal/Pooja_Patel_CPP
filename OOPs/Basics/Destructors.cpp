#include <iostream>
using namespace std;

class MyClass {
public:
    int size;
    char *arr = NULL;

    MyClass(int size) {
        cout << "constructor called!" << endl;
        this->size = size;
        arr = (char *)malloc(this->size * sizeof(char));
        cout << "Enter characters: ";
        cin >> arr;
    }

    void display() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Destructor
    ~MyClass() {
        free(arr);
        arr = NULL;
        cout << "Destructor called!" << endl;
    }
};

// global functions
void fun() {
    MyClass obj(10);

    obj.display();
}

int main() {
    cout << "before fun()" << endl;
    fun();
    cout << "after fun()" << endl;
    fun();

    return 0;
}