#include <iostream>
#include "Car.h"

int main() {

    Car tesla(400,  "initial_sound_tesla");
    Car amg(650, "initial_sound_amg");

    Car bmw(amg); //copy constructor
    bmw.changeExhaust("sport");

    std::cout<<amg.getExhaust()<<std::endl;
    std::cout<<bmw.getExhaust()<<std::endl;
    std::cout<<tesla.getExhaust()<<std::endl;

    return 0;
}
