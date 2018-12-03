//
// Created by Linda Nguyen on 12/2/18.
//

#ifndef CITYOFSJ_ITERATOR_H
#define CITYOFSJ_ITERATOR_H

#include <iostream>
#include <iterator>
#include <string>

template<class T>
class Iterator {
public:
    virtual bool hasNext() = 0;
    virtual T next() = 0;
};

#endif //CITYOFSJ_ITERATOR_H
