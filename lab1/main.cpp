#include <QCoreApplication>
#include <iostream>
#include <math.h>

using namespace std;

struct dek {
int x;
int y;
};

dek vect(dek cord1, dek cord2) {
dek Vector;
Vector.x =cord2.x -cord1.x;
Vector.y =cord2.y -cord1.y;
return Vector;
}

float Result(dek AB, dek AC) {
float cos;
cos =(AB.x*AC.x+AB.y*AC.y)/(sqrt(AB.x*AB.x+AB.y*AB.y)*sqrt(AC.x*AC.x+AC.y*AC.y));
return cos;
}

int main(int argc, char *argv[])
{

dek pot[3], vc[3];
float cos[3];
for(int i=0; i<3; i++) {
    cout << "Enter the coordinates of " << i+1 << " point\nX - ";
    cin >> pot[i].x;
    cout << "Y - ";
    cin >> pot[i].y;
}

vc[0] =vect(pot[0], pot[1]);
vc[1] =vect(pot[1], pot[2]);
vc[2] =vect(pot[2], pot[0]);
cos[0] =Result(vc[0], vc[1]);
cos[1] =Result(vc[1], vc[2]);
cos[2] =Result(vc[2], vc[0]);
if (cos[0]==1 || cos[1]==1 || cos[2]==1)
    cout << 1;
else
    cout << 0;

QCoreApplication a(argc, argv);

return a.exec();
}
