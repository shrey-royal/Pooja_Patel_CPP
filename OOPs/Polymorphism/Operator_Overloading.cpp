#include<iostream>
using namespace std;

class Point {
public:
    int x, y;

    Point(int x, int y) : x(x), y(y) {}

    Point operator+(const Point& other) {
        return Point(x + other.x, y + other.y);
    }

    bool operator==(const Point& other) const { // method constant
        return x == other.x && y == other.y;
    }

    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1(2, 3), p2(4, 5);
    Point p3 = p1 + p2;

    p3.display();

    cout << (Point(2, 39) == Point(2, 39)) << endl;

    return 0;
}

/*
Tasks: take a string and overload * operator that multiplies a string with the given number

Output:
Enter String: Hello
// obj*5
HelloHelloHelloHelloHello
*/