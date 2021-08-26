#include "./List.hpp"

struct Queue {
    void print();
    void enqueue(int);
    int dequeue();
    bool isEmpty();
private:
    List queue{};
};