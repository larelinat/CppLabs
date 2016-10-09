#include "lghtcar.h"
#include <iostream>

LghtCar::LghtCar()
{
    strcpy(type, "lightcar");
    wheels = 4;
    doors = 3;
    crashed = false;
    engtype = 0;
    strcpy(fuel, "92");
}

LghtCar::LghtCar(int drnum, bool crsh, int eng, const char fl[4])
{
    strcpy(type, "lightcar");
    wheels = 4;
    doors = drnum;
    crashed = crsh;
    engtype = eng;
    strcpy(fuel, fl);
}

void LghtCar::info() {
    std::cout << type << ", " << wheels << ", " << doors << ", crashed = " << crashed << ", "
              << engtype << " type of engine, " << fuel << " fuel.\n";
}

void LghtCar::diesel() {
    engtype = 1;
    strcpy(fuel, "Dis");
}

void LghtCar::gas() {
    engtype = 2;
    strcpy(fuel, "Gas");
}

void LghtCar::benzine() {
    engtype = 0;
    strcpy(fuel, "92");
}

void LghtCar::benzine(const char fl[4]) {
    engtype = 0;
    strcpy(fuel, fl);
}

void LghtCar::changefuel(const char fl[4]) {
     strcpy(fuel, fl);
}
