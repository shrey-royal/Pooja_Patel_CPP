#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;

public:
    Vehicle(string brand) {
        this->brand = brand;
    }

    void showBrand() {
        cout << "Brand: " << brand << endl;
    }
};

class MotorVehicle : public Vehicle {
protected:
    string engineType;

public:
    MotorVehicle(string brand, string engineType) : Vehicle(brand) {
        this->engineType = engineType;
    }

    void showEngine() {
        cout << "Engine Type: " << engineType << endl;
    }
};

class Bike : public MotorVehicle {
private:
    int cc;

public:
    Bike(string brand, string engineType, int cc) : MotorVehicle(brand, engineType) {
        this->cc = cc;
    }

    void showBikeDetails() {
        showBrand();
        showEngine();
        cout << "CC: " << cc << endl; 
    }
};

int main() {
    Bike myBike("Yamaha", "Petrol", 150);
    myBike.showBikeDetails();
    
    return 0;
}