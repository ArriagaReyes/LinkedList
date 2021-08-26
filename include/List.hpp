#include "./Node.hpp"
#include <iostream>

struct List {
    List();
    void append(int);
    void prepend(int);
    void insert(int, int);
    void erase(int);
    void print();
    int at(int);
    int getSize();
    int pop();
    int snap();
    int front();
    int back();
    bool isEmpty();
private:
    Node* head;
    Node* tail;
    int size;
};
