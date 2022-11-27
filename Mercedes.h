//
// Created by drago on 27.11.2022.
//

#ifndef PAOO_MERCEDES_H
#define PAOO_MERCEDES_H


#include "Car.hpp"

class Mercedes: public Car{
private:
    bool isBrabus = false;

public:
    Mercedes(int horsePower, const std::string &exhaust, bool isBrabus);
    Mercedes(const Mercedes &merc);
    void setBrabus(bool isBrabus);
    bool getBrabus();
};


#endif //PAOO_MERCEDES_H
