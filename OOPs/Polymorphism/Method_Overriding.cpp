#include<iostream>
#include<string>
using namespace std;

class Adder {
public:
    virtual void add() {
        cout << "A simple method to add data..." << endl;
        return;
    }
};

class Integer : public Adder {
private:
    int a, b;
public:
    Integer(int a, int b) : a(a), b(b) { }

    void add() override {
        cout << a << " + " << b << " = " << a+b << endl;
        return;
    }
};

class Character : public Adder {
private:
    char a, b;
public:
    Character(char a, char b) : a(a), b(b) { }

    void add() override {
        string s;
        s.append(1, a);
        s.append(1, b);
        cout << a << " + " << b << " = " << s << endl;
        return;
    }
};

int main() {
    Integer i(2, 3);
    i.add();

    Character c('a', 'b');
    c.add();

    Adder* a = new Integer(2, 3);
    a->add();


    return 0;
}