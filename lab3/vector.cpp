#include "vector.h"
#include <iostream>
//#include <Comments_don't_need>


Vector::Vector()
{
x = 0;
y = 0;
}

Vector::Vector(double i, double j) {
    x = i;
    y = j;
}


void Vector::info() {                                       // вывод информации о векторе
    std::cout << x << ", " << y << "\n";
}

Vector Vector::operator *(double n) {           // переопределяем оператор умножения * как
    Vector help;                                         // умножение вектора на число
    help.x = x*n;
    help.y = y*n;
    return help;
}


Vector Vector::operator /(double n) {           // переопределяем оператор деления /
    Vector help;                                         // деление вектора на число
    help.x = x/n;
    help.y = y/n;
    return help;
}
