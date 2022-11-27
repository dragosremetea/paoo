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

//    Car &operator=(Car const&) = default; // "=" este default

    Car &operator=(const Car& rhs);

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
// inheritance !!!!!!!!!!!!!!
// da si tu cu cmake lasa ide ul :D