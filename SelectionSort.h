//
// Created by pat-g on 10/24/16.
//

#ifndef SORTS_SELECTIONSORT_H
#define SORTS_SELECTIONSORT_H


#include "sortInterface.h"

template <class Info>
class sortInterface;

template<class Info>
class Menu;

template <class Info>
class SelectionSort: public sortInterface<Info> {
public:
    SelectionSort(){}
    SelectionSort(std::vector<Info> toSort) {
        this->setToSortInterface(toSort);
    }

    void sortAscending(){
        Menu<Info> menu;
        Info temp;
        size_t size = this->toSortInt.size();
        int lowestIndex = 0;
        for(int i = 0;i < size;i++){
            lowestIndex = i;
            for(int j = i + 1;j < size-1;j++){
                if(this->toSortInt[j] < this->toSortInt[lowestIndex]){
                    lowestIndex = j;
                }
            }
           menu.swap(&this->toSortInt[i],&this->toSortInt[lowestIndex]);
            menu.print(this->toSortInt);

        }

    }

    void sortDescending(){
        Menu<Info> menu;
        Info temp;
        size_t size = this->toSortInt.size();
        int lowestIndex = 0;
        for(int i = 0;i < size;i++){
            lowestIndex = i;
            for(int j = i + 1;j < size-1;j++){
                if(this->toSortInt[j] > this->toSortInt[lowestIndex]){
                    lowestIndex = j;
                }
            }
            menu.swap(&this->toSortInt[lowestIndex],&this->toSortInt[i]);
            menu.print(this->toSortInt);

        }

    }
};


#endif //SORTS_SELECTIONSORT_H
