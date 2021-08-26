#include "../include/Queue.hpp"

void Queue::print() {
    queue.print();
}

void Queue::enqueue(int data) {
    queue.append(data);
}

int Queue::dequeue() {
    return queue.pop();
}

bool Queue::isEmpty() {
    return queue.isEmpty();
}