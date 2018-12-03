//
// Created by drnuc on 12/2/2018.
//

#ifndef CITYOFSJ_CITYCATEGORYFACTORY_H
#define CITYOFSJ_CITYCATEGORYFACTORY_H

#include "CityCategory.h"
#include "Attractions.h"
#include "Restaurants.h"

class CityCategoryFactory {
public:

    enum CityCategoryTypes {
        RESTAURANT = 0,
        ATTRACTION
    };

    CityCategory * create(CityCategoryTypes type);
};


#endif //CITYOFSJ_CITYCATEGORYFACTORY_H
