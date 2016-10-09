#ifndef VECTOR_H
#define VECTOR_H
//#include <Comments_don't_need>

class Vector
{
private:
    double x;
    double y;
public:
    Vector();
    Vector(double i, double j);
    void info();
    Vector operator*(double n);       //Переопределяем оператор умножения
    Vector operator/(double n);       //Переопределяем оператор деления
};

#endif // VECTOR_H
