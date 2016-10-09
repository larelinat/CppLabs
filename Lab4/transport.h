#ifndef TRANSPORT_H
#define TRANSPORT_H


class Transport
{
public:
    char type[10];
    int wheels;
    bool crashed;
    int doors;
    Transport();
    Transport(char tp[10], int whls, int drs, bool crsh);
    void info();
    void crash();
    void repair();
    int chgwheel(int n);
    int chgdoors(int n);
};





#endif // TRANSPORT_H
