//
// Created by pat-g on 10/22/16.
//

#ifndef SORTS_MENU_H
#define SORTS_MENU_H

#include <iostream>
#include <vector>
#include "BubbleSort.h"
#include "SelectionSort.h"
#include "sortInterface.h"
template <class Info>
class sortInterface;

template <class Info>
class Menu: virtual public sortInterface <Info>{
private:
    int choice;
    std::vector<Info> toSort;
public:

    Menu() {
    }

    Menu(std::vector<Info> toSort) {
        this->toSort = toSort;
    }

    std::vector<Info> getToSort() { return this->toSort; }

    void printMenu(){
        int choice = 0;
        std::cout << "********************************************************" << std::endl;
        std::cout << "(1) For Bubble Sort" << std::endl ;
        std::cout << "********************************************************" << std::endl;
        std::cout << "(2) For Selection Sort" <<std::endl;
        std::cout << "********************************************************" << std::endl;
        std::cout << "Enter Choice: ";

        std::cin >> choice;

        setChoice(choice);
        initiateSelectedSort();
    };

    void setChoice(int choice) {
        this->choice = choice;}
    int getChoice() {
        return this->choice;
    }

    void initiateSelectedSort() {

        BubbleSort<Info> bubble(getToSort());
        SelectionSort<Info> selection(getToSort());

        int choice = getChoice();
        switch (choice) {
            case 1:
/*
 *              ASCHII ART FOR LATER IMPLEMENTATION
 *              std::cout << "BBBBBB    U       U" << std::endl;
                std::cout << "B     B   U       U" << std::endl;
                std::cout << "BBBBBB    U       U" << std::endl;
                std::cout << "B      B  U       U" << std::endl;
                std::cout << "B      B   U     U" << std::endl;
                std::cout << "BBBBBBB     UUUUU" << std::endl;
*/
                std::cout << "BUBBLE SORT...  BUBBLE SORT" << std::endl;

                std::cout << "********************************************************" << std::endl << std::endl;

                std::cout << "Enter 1 for ascending or 2 for descending sort: ";
                std::cin >> choice;

                std::cout <<std::endl << "********************************************************" << std::endl;

                if(choice == 1)
                    bubble.sortAscending();
                else
                    bubble.sortDescending();
                break;
            case 2:
                std::cout << "SELECTION SORT... SELECTION SORT" << std::endl;
                std::cout << "********************************************************" << std::endl << std::endl;

                std::cout << "Enter 1 for ascending or 2 for descending sort: ";
                std::cin >> choice;

                std::cout <<std::endl << "********************************************************" << std::endl;
                if(choice == 1)
                selection.sortAscending();
                else
                    selection.sortDescending();
                break;



            default:
                std::cout << "Invalid choice " << std::endl;
        }
    }
    void print(std::vector<Info> toSortInt) {

        for (int i = 0; i < toSortInt.size(); i++) {
            std::cout << " | " << toSortInt[i] << " | ";
        }
        std::cout << std::endl;

    }
    void swap(Info* a,Info* b){
        Info temp;
        temp = *a;
        *a = *b;
        *b = temp;

    }
};


#endif //_MENU_H
