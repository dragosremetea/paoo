#include "Mercedes.h"
#include <iostream>

Mercedes::Mercedes(int horsePower, const std::string& exhaust, bool isBrabus): Car(horsePower, exhaust) {
    this->isBrabus = isBrabus;
    std::cout<<"A fost apelat constructor de mercedes"<<std::endl;
}

void Mercedes::setBrabus(bool isBrabus) {
    this->isBrabus = isBrabus;
}

bool Mercedes::getBrabus() {
    return this->isBrabus;
}

Mercedes::Mercedes(const Mercedes &merc) {
    this->isBrabus = merc.isBrabus;
    this->setHorsePower(merc.getHorsePower());
    this->setOdometer(merc.getOdometer());
    this->setExhaust(merc.getExhaust());
}
