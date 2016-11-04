//
// Created by pat-g on 10/21/16.
//

#ifndef SORTS_SORTINTERFACE_H
#define SORTS_SORTINTERFACE_H

#include <vector>
#include "Menu.h"
template <class Info>
class sortInterface {
protected:
    std::vector<Info> toSortInt;
public:
    sortInterface(){}
    ~sortInterface(){}
    void setToSortInterface(std::vector<Info> toSort){this->toSortInt = toSort;}
    std::vector<Info> getToSortInterface(){return this->toSortInt;}

    virtual void sortAscending(){};
    virtual void sortDescending(){};
    virtual void print(){};
    virtual void swap(Info*,Info*){};

};


#endif //SORTS_SORTINTERFACE_H
