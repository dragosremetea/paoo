//
// Created by drago on 17.11.2022.
//

#ifndef PAOO_CAR_H
#define PAOO_CAR_H

#include <string>

//using namespace std; - pentru juniori, nu e recomandat

class Car {
private:
    int horsePower = 0;
    std::string exhaust = std::string();
    double odometer = 0.0;

public:
    Car(int horsePower,
        std::string exhaust); //string este o adresa, sa nu facem transmitere prin valoare, deci nu cream alt string

    ~Car();

    Car(Car &o) = default;

    Car &operator=(Car const&) = default; // "=" este default

    Car &operator=(Car &&) = delete; // "=" pentru std::move(car2)

    Car(Car &&o) = delete;

    void tuneEngine(int horsePower);

    void changeExhaust(std::string mode);

    void drive();

    int getHorsePower() const;

    void setHorsePower(int horsePower);

    const std::string &getExhaust() const;

    void setExhaust(const std::string &exhaust);

    double getOdometer() const;

    void setOdometer(double odometer);

    /* C++ silent functions
     * - copy constructor
     * - move destructor
     * - default constructor
     * - destructor //elibereaza memoria
     * - "=" operator
     * */
};


#endif //PAOO_CAR_H
