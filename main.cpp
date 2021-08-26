#include "./include/Queue.hpp"
#include <iostream>

using namespace std;

int main() {
    Queue myQueue{};

    myQueue.enqueue(1);
    myQueue.enqueue(2);
    myQueue.enqueue(3);
    myQueue.enqueue(4);

    myQueue.print();

    myQueue.dequeue();

    cout << endl;

    myQueue.print();

    return 0;
}