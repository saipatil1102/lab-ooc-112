#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void start() = 0;
    virtual void stop() = 0;
};

class Car : public Vehicle {
public:
    void start() override {
        cout << "Car starts with a key." << endl;
    }

    void stop() override {
        cout << "Car stops using brakes." << endl;
    }
};

class Bike : public Vehicle {
public:
    void start() override {
        cout << "Bike starts with a self-start button." << endl;
    }

    void stop() override {
        cout << "Bike stops using brakes." << endl;
    }
};

int main() {
    Vehicle* vehicle;

    Car car;
    Bike bike;

    vehicle = &car;
    vehicle->start();
    vehicle->stop();

    vehicle = &bike;
    vehicle->start();
    vehicle->stop();

    return 0;
}