//
// Created by Linda Nguyen on 12/2/18.
//

#include "CityCategoryIterator.h"

CityCategoryIterator::CityCategoryIterator(std::vector<CityCategory *> *input)
{
    CityCategories = input;
    position = 0;
}

bool CityCategoryIterator::hasNext()
{
    if (position < CityCategories->size()) {
        return true;
    } else {
        return false;
    }
}

CityCategory * CityCategoryIterator::next()
{
    CityCategory * cityCategory = CityCategories->at(position++);
    return cityCategory;
}
