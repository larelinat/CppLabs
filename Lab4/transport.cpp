#include "transport.h"
#include <iostream>

Transport::Transport()
{
    type[10] = "";
    wheels = 0;
    crashed = false;
    doors = 1;
}

Transport::Transport(char tp[10], int whls, int drs, bool crsh) {
    strcpy(type, tp);
    wheels = whls;
    doors = drs;
    crashed = crsh;
}

void Transport::info() {
    std::cout << type << ", " << wheels << ", " << doors << ", crashed = " << crashed;
}

void Transport::crash() {
    crashed = true;
    std::cout << type << " is crashed.";
}

void Transport::repair() {
    crashed = false;
    std::cout << type << " is repaired.";
}

int Transport::chgwheel(int n) {
    wheels = n;
    return n;
}

int Transport::chgdoors(int n) {
    doors = n;
    return n;
}
