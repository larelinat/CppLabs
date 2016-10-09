#include <QCoreApplication>
#include "book.h"
#include <iostream>

using namespace std;


int main(int argc, char *argv[])
{
   Book b1;
   Book b2("en", "Lord of the rings", 500, 1) ;
   Book b3("fr", "Alice in the wonderland", 278, 0);
   Book b4;
   b1.info();
   b2.info();
   b3.info();
   b4.info();
   std::cout << "\nWork with 1 book\n";
   b1.changepg(37);
   b1.changeName("New book");
   b1.info();
   std::cout << "\nWork with 2 book\n";
   b2.langcg("ru");
   b2.blocker();
   b2.changepg(500);
   b2.info();
   b2.final();
   b2.changepg(500);
   b2.info();
   std::cout << "\nWork with 3 book\n";
   b3.info();
   b3.changepg(22);
   std::cout << "\nWork with 4 book\n";
   b4.info();
   b4.changeName("Random book");
   b4.changepg(rand());
   b4.langcg("de");
   b4.info();
   b4.newed();
   b4.info();

    QCoreApplication a(argc, argv);

    return a.exec();
}
