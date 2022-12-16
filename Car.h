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
    Car ();

    Car(int horsePower,
        std::string exhaust);

    ~Car();

    Car(Car &o) = default;

    Car &operator=(const Car& rhs);

    static Car* createCar();

    void tuneEngine(int horsePower);

    void changeExhaust(std::string mode);

    void drive();

    int getHorsePower() const;

    void setHorsePower(int horsePower);

    const std::string &getExhaust() const;

    void setExhaust(const std::string &exhaust);

    double getOdometer() const;

    void setOdometer(double odometer);

    void isOnSportMode();

    /* C++ silent functions
     * - copy constructor
     * - move destructor
     * - default constructor
     * - destructor //elibereaza memoria
     * - "=" operator
     * */
};


#endif