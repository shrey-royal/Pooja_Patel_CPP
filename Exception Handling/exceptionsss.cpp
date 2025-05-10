#include<iostream>
#include<vector>
using namespace std;

void division(float a, float b) {
    if (b == 0) {
        throw invalid_argument("Trying to divide by zero.");
    }
    cout << "Division: " << a/b << endl;
}

int main() {
    string s = "Here is one string";
    cout << "Before Exception" << endl;
    
    try {
        division(200, 0);
        cout << s.at(20);
    } /*catch(const invalid_argument& e) {
        cout << "Error Message: " << e.what() << endl;
    } catch(const out_of_range& e) {
        cout << "Error Message: " << e.what() << endl;
    } */catch(...) {
        cout << "Exception Occured..." << endl;
    }
    
    cout << "After Exception" << endl;

    return 0;
}