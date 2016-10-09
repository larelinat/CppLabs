#ifndef TRANSPORT_H
#define TRANSPORT_H
#include <string.h>

class Transport
{
protected:
    char type[10];
    int wheels;
    int crashed;
    int doors;
public:
    Transport();
    Transport(const char tp[10], int whls, int drs, bool crsh);
    void info();
    void crash();
    void repair();
    void chgtype(const char tp[10]);
    int chgwheel(int n);
    int chgdoors(int n);
};





#endif // TRANSPORT_H
