#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;
    int speed;

public:
    Vehicle(string brand, int speed) : brand(brand), speed(speed) {}

    void displayVehicle() {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << endl;
    }
};

class Car : private Vehicle {
private:
    string fuelType;
    int doors;
public:
    Car(string brand, int speed, string fuelType, int doors) : Vehicle(brand, speed), fuelType(fuelType), doors(doors) {}

    void getCarDetails() {
        displayVehicle();
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Doors: " << doors << endl;
    }
};

int main() {
    Car c("Honda", 100, "Petrol", 4);

    c.getCarDetails();
}