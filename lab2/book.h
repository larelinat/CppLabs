#ifndef BOOK_H
#define BOOK_H


class Book
{
 private:
    int pageNum; //количество страниц книги
    char lang[3]; //язык книги
    char name[30]; //название книги
    int block; //блокировка изменений
    int edition; //издание книги
 public:
    Book();
    Book(const char lg[3], const char nm[30], int pageN, int ed);
    void info();
    int changepg(int n); //изменение количества страниц
    void changeName(const char nn[30]); //изменение названия книги
    void blocker(); //заблокировать книгу
    void langcg(const char ln[]); //изменить язык
    void newed(); //новое издание
    void final(); //последнее издание
};

#endif // BOOK_H
