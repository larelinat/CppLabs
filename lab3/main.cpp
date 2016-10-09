#include <QCoreApplication>
#include  "vector.h"
//#include <Comments_don't_need>






int main(int argc, char *argv[])
{
    Vector v1;
    Vector v2(10, 25);
    v1.info();
    v2.info();
    v1 = v1* 7;
    v2 = v2 / 5;
    v1.info();
    v2.info();
    v2 = v2 * 9;
    v2.info();
    Vector x(1, 1);
    Vector y(2, 2);
    x = x*5;
    x.info();
    x = y *5;
    x.info();
    y.info();


    // По моему мнению, комментирование подобных задач
    // не имеет никакого смысла, так как все и без этого
    // просто и понятно, особенно если называть вещи
    // своими именами..

    QCoreApplication a(argc, argv);

    return a.exec();
}
