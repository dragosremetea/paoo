#include "Car.h"
#include <iostream>

Car::Car(int horsePower, std::string exhaust) {
    this->horsePower = horsePower;
    this->exhaust = exhaust;
}

Car::~Car() {
    std::cout<<"Am dus gunoiul"<<std::endl;
}

void Car::tuneEngine(int stage) {
    switch (stage) {
        case 1:
            horsePower += 100;
            break;
        case 2:
            horsePower += 200;
            break;
        case 3:
            horsePower += 500;
            break;
        default:
            std::cout<<"Invalid stage"<<std::endl;
    }
}

void Car::changeExhaust(std::string mode) {
    if (mode == "sport") {
        exhaust = "ratatatata";
        return;
    }
    if (mode == "comfort") {
        exhaust = "vrum";
        return;
    }
    if (mode == "electric") {
        exhaust = std::string();
        return;
    }
}

void Car::drive() {
    this->horsePower++;
}

int Car::getHorsePower() const {
    return horsePower;
}

void Car::setHorsePower(int horsePower) {
    Car::horsePower = horsePower;
}

const std::string &Car::getExhaust() const {
    return exhaust;
}

void Car::setExhaust(const std::string &exhaust) {
    Car::exhaust = exhaust;
}

double Car::getOdometer() const {
    return odometer;
}

void Car::setOdometer(double odometer) {
    Car::odometer = odometer;
}


