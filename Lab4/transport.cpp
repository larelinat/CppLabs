#include "transport.h"
#include <iostream>

Transport::Transport()
{
    strcpy(type, "");
    wheels = 0;
    crashed = false;
    doors = 1;
}

Transport::Transport(const char tp[10], int whls, int drs, bool crsh) {
    strcpy(type, tp);
    wheels = whls;
    doors = drs;
    crashed = crsh;
}

void Transport::chgtype(const char tp[10]) {
    strcpy(type, tp);
}

void Transport::info() {
    std::cout  << type << ", " << wheels << ", " << doors << ", crashed = " << crashed << "\n";
}

void Transport::crash() {
    crashed = true;
    std::cout << type << " is crashed.\n";
}

void Transport::repair() {
    crashed = false;
    std::cout << type << " is repaired.\n";
}

int Transport::chgwheel(int n) {
    wheels = n;
    return n;
}

int Transport::chgdoors(int n) {
    doors = n;
    return n;
}
