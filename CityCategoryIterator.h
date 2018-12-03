//
// Created by Linda Nguyen on 12/2/18.
//

#ifndef CITYOFSJ_CITYCATEGORYITERATOR_H
#define CITYOFSJ_CITYCATEGORYITERATOR_H

#include "CityCategory.h"
#include "Iterator.h"

class CityCategoryIterator : public Iterator<CityCategory *> {

private:
    //std::vector<CityCategory *> CityCategories; // not preferred method
    std::vector<CityCategory *> *CityCategories;
    unsigned int position;
public:
    CityCategoryIterator(std::vector<CityCategory *> *input);

    bool hasNext() override;
    CityCategory * next() override;

    void resetPosition() { position = 0; }
};


#endif //CITYOFSJ_CITYCATEGORYITERATOR_H
