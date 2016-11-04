//
// Created by pat-g on 10/20/16.
//

#ifndef SORTS_BUBBLESORT_H
#define SORTS_BUBBLESORT_H

#include <iostream>

#include "sortInterface.h"
#include "Menu.h"

template<class Info>
class sortInterface;

template<class Info>
class Menu;

template<class Info>
class BubbleSort : public sortInterface<Info> {
public:

    BubbleSort() {
    }

    BubbleSort(std::vector<Info> toSort) {
        this->setToSortInterface(toSort);
    }

    //Basic Bubble sort from small to large value
    void sortAscending() {
        Menu<Info> menu;
        //This is just an abstract data type implemented using templates
        //in short what ever you pass into the function i.e. int char string it
        //will be that data type.
        Info temp;
        //Get the length of the vector
        size_t size = this->toSortInt.size();
        //Outside loop will loop N times in this case N = size which represents
        //the number of elements in the vector.
        for (int i = 0; i < size-1; i++) {

            for (int j = 0; j < size-1; j++) {
                //If the the element in the first position is larger then
                //that of the adjacent position, then swap.
                if (this->toSortInt[j] > this->toSortInt[j + 1]) {
                    //Swap function in Menu class it just swaps the 2 vector elements with each other
                    menu.swap(&this->toSortInt[j], &this->toSortInt[j + 1]);

                }
                menu.print(this->toSortInt);
            }
        }

    }

    //Basic Bubble sort from large to small value
    void sortDescending() {
        Menu<Info> menu;
        //Info temp, is just an abstract data type implemented using templates
        //in short what ever you pass into the function i.e. int char string it
        //will be that data type.
        Info temp;
        //Get the length of the vector
        size_t size = this->toSortInt.size();

        //Outside loop will loop N times in this case N = size which represents
        //the number of elements in the vector.
        for (int i = 0; i < size-1; i++) {

            for (int j = 0; j < size-1; j++) {

                //If the the element in the first position is larger then
                //that of the adjacent position, then swap.
                if (this->toSortInt[j] < this->toSortInt[j + 1]){
                    menu.swap(&this->toSortInt[j + 1], &this->toSortInt[j]);
            }
                menu.print(this->toSortInt);
            }
        }

    }


};


#endif //SORTS_BUBBLESORT_H
