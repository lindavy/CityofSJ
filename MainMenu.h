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

class MainMenu {
private:
    UserFacade * userFacade;
public:
    MainMenu();
    ~MainMenu();

    void viewAll();
};

#endif //CITYOFSJ_USER_H
