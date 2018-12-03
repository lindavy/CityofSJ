//
// Created by Linda Nguyen on 12/2/18.
//

#ifndef CITYOFSJ_USERFACADE_H
#define CITYOFSJ_USERFACADE_H

#include "CityCategoryFactory.h"
#include "CityCategoryIterator.h"

class UserFacade {
private:
    std::string name, description;
    CityCategory * category;
    CityCategoryFactory cityCategoryFactory;
    std::vector<CityCategory *> CityCategories; // not preferred method
    CityCategoryIterator CityCategoriesIterator;

    bool fav;
    int rating;
public:
    UserFacade();
    void initialize();
    void addPlace(int choice);

    std::vector<CityCategory *> * getCityCategories() { return &CityCategories; }

    void viewAll();
    void viewCategory();
};

#endif //CITYOFSJ_USERFACADE_H
