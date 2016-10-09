#ifndef LGHTCAR_H
#define LGHTCAR_H
#include "transport.h"
#include <string.h>
class LghtCar : public Transport
{
protected:
    int engtype;
    char fuel[4];
public:
    LghtCar();
    LghtCar(int drnum, bool crsh, int eng, const char fl[4]);
    void info();
    void diesel();
    void gas();
    void benzine();
    void benzine(const char fl[4]);
    void changefuel(const char fl[4]);
};

#endif // LGHTCAR_H
