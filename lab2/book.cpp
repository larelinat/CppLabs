#include "book.h"
#include <string.h>
#include <iostream>

Book::Book() {
    pageNum = 0;
    strcpy(lang, "ru");
    strcpy(name, "");
    block = 0;
    edition = 1;
}


Book::Book(const char lg[3], const char nm[30], int pageN, int ed)
{
    pageNum = pageN;
    strcpy(lang, lg);
    strcpy(name, nm);
    block = 0;
    edition = ed;
}


void Book::info() {
    std::cout << name << ", " <<
                 lang << ", " <<
                 pageNum << ", ";
    if (edition == 0) {
        std::cout << "Final edition\n";
    }
    else {
        std::cout << edition << " edition\n";
    }
}

int Book::changepg(int n) {
    if (edition == 0)
        std::cout << "It's a Final edition, changes are blocked!\n";
    else if (block == 1)
        std::cout << "The book is blocked\n";
    else {
        pageNum = n;
        newed();
    }
    return pageNum;
}

void Book::changeName(const char nn[30]) {
    if (edition == 0)
        std::cout << "It's a Final edition, changes are blocked!\n";
    else if (block == 1)
        std::cout << "The book is blocked\n";
    else {
        strcpy(name, nn);
        newed();
    }
}

void Book::blocker() {
    if (block == 1)
        std::cout << "Already blocked\n";
    else
        block = 1;
}

void Book::langcg(const char ln[2]) {
    if (edition == 0)
        std::cout << "It's a Final edition, changes are blocked!\n";
    else if (block == 1)
        std::cout << "The book is blocked\n";
    else {
       strcpy(lang, ln);
       newed();
    }
}

void Book::newed() {
    if (edition == 0)
        std::cout << "It's a Final edition, changes are blocked!\n";
    else if (block == 1)
        std::cout << "The book is blocked\n";
    else {
        edition += 1;
    }
}

void Book::final() {
    edition = 0;
    block = 1;
}
