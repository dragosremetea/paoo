#include <iostream>
#include <memory>
#include "Car.h"
#include "Mercedes.h"

void f_auto() {
    std::auto_ptr<Car> plnv(Car::createCar());
    std::cout<<plnv->getExhaust()<<std::endl;
    plnv->changeExhaust("sport");
    std::cout<<plnv->getExhaust()<<std::endl;
    plnv->setHorsePower(4);

    std::auto_ptr<Car> plnv2(plnv);
//    std::cout<<plnv->getHorsePower()<<std::endl; //nu functioneaza pentru ca plnv = null
    std::cout<<plnv2->getHorsePower()<<std::endl;
}

void f_shared() {
    std::shared_ptr<Car> plnv(Car::createCar());
    plnv->setHorsePower(5);

    std::shared_ptr<Car> plnv2(plnv);
    plnv2->setHorsePower(6);

    std::cout<<plnv->getHorsePower()<<std::endl;
    std::cout<<plnv2->getHorsePower()<<std::endl;
}

void lock(Car &c) {
    std::cout<<"Car with "<< c.getHorsePower() << " hp is SET on SPORT mode"<<std::endl;
    c.changeExhaust("sport");
}

void unlock(Car &c) {
    std::cout<<"Car with "<< c.getHorsePower() << " hp is SET on non-SPORT mode"<<std::endl;
    c.changeExhaust("electric");
}

int main() {

    Car tesla(400,  "initial_sound_tesla");
    Car amg(650, "initial_sound_amg");

    Car bmw(amg); //copy constructor
    bmw.changeExhaust("sport");


    std::cout<<amg.getExhaust()<<std::endl;
    std::cout<<bmw.getExhaust()<<std::endl;
    std::cout<<tesla.getExhaust()<<std::endl;

    std::cout<<"Cai before tuning "<< bmw.getHorsePower()<<std::endl;
    bmw.tuneEngine(2);
    std::cout<<"Cai after tuning "<< bmw.getHorsePower()<<std::endl;

    std::cout<<"new BMW odometer: "<< bmw.getOdometer()<<std::endl;

    for(int i = 0; i<198000; i++) {
        bmw.drive();
    }

    std::cout<<"BMW for \"pretentiosi\" odometer: "<< bmw.getOdometer()<<std::endl;


    std::cout<<std::endl;

    Mercedes merc(800, "br br br br", true);

    std::cout<<"Brabus? :"<< merc.getBrabus() <<" and horsepower: "<<merc.getHorsePower()<<std::endl;


    Car car1, car2, car3;

    car3=car2=car1=bmw=bmw; //de la dreapta la stanga

    Mercedes merc2(merc);
    std::cout<<"Brabus? :"<< merc2.getBrabus() <<" and horsepower: "<<merc2.getHorsePower()<<std::endl;

    f_auto();

    f_shared();

    //obesrvam ca prima data se sterg masinile create prin factory (individual, imediat dupa apelarea fiecarei functii), iar apoi destructorul sterge restul

    Car car5;
    car5.setHorsePower(555);
    car5.setExhaust("orice dar nu ratatatata");

    car5.isOnSportMode();
    lock(car5);
    car5.isOnSportMode();
    unlock(car5);
    car5.isOnSportMode();

    return 0;
}
