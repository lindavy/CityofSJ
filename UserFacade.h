//
// Created by Linda Nguyen on 12/2/18.
//

#ifndef CITYOFSJ_USERFACADE_H
#define CITYOFSJ_USERFACADE_H

#include "CityCategoryFactory.h"

class UserFacade {
private:
    std::string name, description;
    CityCategory * category;
    CityCategoryFactory cityCategoryFactory;

    bool fav;
    int rating;
public:
    void initialize(std::vector<CityCategory *> * CityCategories);
    CityCategory * addPlace(int choice);
};

#endif //CITYOFSJ_USERFACADE_H
