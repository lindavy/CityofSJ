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


class MainMenu {
private:
    UserFacade * userFacade;
    int select;
public:
    MainMenu();
    ~MainMenu();

    void view();
    void add();
};

#endif //CITYOFSJ_USER_H
