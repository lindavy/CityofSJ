//
// Created by drnuc on 12/2/2018.
//

#include "CityCategoryFactory.h"

CityCategory *CityCategoryFactory::create(CityCategoryFactory::CityCategoryTypes type) {
    CityCategory  * cityCategoryTypes;
    switch (type) {
        case ATTRACTION: cityCategoryTypes = new Attraction(); break;
        case RESTAURANT: cityCategoryTypes = new Restaurant(); break;
        default: break;
    }
    return cityCategoryTypes;
}
