#include <iostream>
#include <vector>
#include <ctime>
#include "Menu.h"
using namespace std;
int main() {

    vector<int> toSort;
    size_t size;
    int element;
    srand((unsigned) time(0));

    std::cout << "Enter number of random elements N: ";
    std::cin >> size;

    toSort.resize(size);

    for (int i = 0; i < size;i++){
        element = (rand() % 2800);
        toSort[i] = element;
}

    Menu<int> menu(toSort);
    menu.printMenu();
    return 0;
}