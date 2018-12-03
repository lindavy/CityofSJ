//
// Created by Linda Nguyen on 12/1/18.
//

#ifndef CITYOFSJ_USER_H
#define CITYOFSJ_USER_H

#include <iostream>
#include <iterator>
#include "CityCategory.h"
#include "Attractions.h"
#include "Restaurants.h"
#include "CityCategoryIterator.h"
#include "UserFacade.h"

typedef enum
{
    restaurant = 1,
    transit = 2,
    attraction = 3,
    school = 4,
    services = 5
} category;

class User {

private:
    UserFacade userFacade;
    std::vector<CityCategory *> CityCategories; // not preferred method
    CityCategoryIterator CityCategoriesIterator;

    /*
     * Implement line below later
     * std::vector<std::shared_ptr<CityCategory>> CityCategories;
     * It frees memory automatically after element is removed/destructed from vector
     */

    int choice;

public:
    User();

//    void initialize();
    void viewAll();
    void viewCategory();
    //void addPlace(category cc); // User Input
};

#endif //CITYOFSJ_USER_H
