#include <iostream>
using namespace std;

namespace math {
    int add(int a, int b) {
        return a+b;
    }

    int subtract(int a, int b) {
        return a-b;
    }

    int square(int x) {
        return x*x;
    }

    void fun() {
        cout << "Math is fun" << endl;
    }
}

namespace physics {
    float velocity(float distance, float time) {
        return distance/time;
    }

    double kineticEnergy(double mass, double velocity) {
        return 0.5 * mass * velocity * velocity;
    }
    
    void fun() {
        cout << "Physics is fun" << endl;
    }
}


int main() {
    using namespace math;
    using namespace physics;

    cout << "5 + 3 = " << add(5, 3) << endl;
    cout << "5 - 3 = " << subtract(5, 3) << endl;
    cout << "5 ^ 2 = " << square(5) << endl;
    
    cout << "Velocity: " << velocity(100, 10) << endl;
    cout << "Velocity: " << kineticEnergy(10.0, 5.0) << endl;

    math::fun();
    physics::fun();

    return 0;
}