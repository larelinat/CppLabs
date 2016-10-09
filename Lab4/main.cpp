#include <QCoreApplication>
#include "transport.h"
#include "lghtcar.h"
#include <iostream>

int main(int argc, char *argv[])
{
    Transport A320("plane", 6, 8, false);
    Transport random;

    random.info();
    A320.info();
    std::cout << "Plane:\n";
    A320.crash();
    A320.info();
    std::cout << "Unknown:\n";
    random.chgwheel(4);
    random.chgdoors(5);
    random.chgtype("car");
    random.crash();
    random.info();
    random.repair();
    random.info();

    LghtCar Toyota;
    LghtCar Mazda(5, false, 0, "95");
    Toyota.info();
    Mazda.info();
    std::cout << "Toyota:\n";
    Toyota.gas();
    Toyota.crash();
    Toyota.info();
    std::cout << "Mazda:\n";
    Mazda.changefuel("98");
    Mazda.info();
    Mazda.diesel();
    Mazda.info();

    QCoreApplication a(argc, argv);
    return a.exec();
}
