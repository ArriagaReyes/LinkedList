#include "../include/List.hpp"

List::List() {
    head = nullptr;
    tail = nullptr;
    size = 0;
}

void List::append(int data) {
    Node* node = new Node;
    node->data = data;
    node->next = nullptr;

    if(head == nullptr) {
        head = node;
        tail = node;
    } else {
        tail->next = node;
        tail = node;
    }

    size++;
}

void List::prepend(int data) {
    Node* node = new Node;

    node->data = data;
    node->next = head;

    head = node;

    size++;
}

void List::insert(int data, int index) {
    if(head == nullptr) {
        return;
    }

    if((index < 0) || (size - 1 < index)) {
        return;
    }

    Node* current = head;

    for(int i = 0; i <= size - 1; i++) {
        if(i != index - 1) {
            current = current->next;
        } else {
            break;
        }
    }

    Node* node = new Node;

    node->data = data;
    node->next = current->next;
    current->next = node;

    size++;
}

void List::erase(int index) {
    if(head == nullptr) {
        return;
    }

    if((index < 0) || (size - 1 < index)) {
        return;
    }

    Node* current = head;

    for(int i = 0; i <= size - 1; i++) {
        if(i != index - 1) {
            current = current->next;
        } else {
            break;
        }
    }

    Node* node = current->next;

    current->next = node->next;
    node->next = nullptr;

    size--;
}

void List::print() {
    Node* current = head;

    while(current != nullptr) {
        std::cout << current->data << std::endl;
        current = current->next;
    }
}

int List::at(int index) {
    if((index < 0) || (size - 1 < index)) {
        return -1;
    }

    Node* current = head;

    for (int i = 0; i <= size - 1; i++) {
        if(index == i) {
            return current->data;
        }

        current = current->next;
    }

    return -1;
}

int List::pop() {
    if(head == nullptr) {
        return -1;
    }

    Node* node = head;

    head = node->next;
    node->next = nullptr;

    size--;

    return node->data;
}

int List::snap() {
    Node* current = head;
    Node* node{};

    if(head == nullptr) {
        return -1;
    }

    while(current->next != tail) {
        current = current-> next;
    }

    node = current->next;

    tail = current;
    current->next = nullptr;

    size--;

    return node->data;
}

int List::front() {
    if(head != nullptr) {
        return head->data;
    }

    return -1;
}

int List::back() {
    if(tail != nullptr) {
        return tail->data;
    }

    return -1;
}

int List::getSize() {
    return size;
}

bool List::isEmpty() {
    return head;
}