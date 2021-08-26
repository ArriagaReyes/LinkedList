#include "./include/List.hpp"
#include <iostream>

using namespace std;

int main() {
    List myList;

    myList.append(7);
    myList.append(69);
    myList.prepend(24);
    myList.append(49);

    myList.print();

    myList.pop();
    myList.snap();

    cout << endl;

    myList.append(4);
    myList.append(22);
    myList.prepend(1);

    myList.insert(40, 2);

    myList.print();

    myList.erase(2);

    cout << endl;
    myList.print();

    return 0;
}