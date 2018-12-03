//
// Created by Linda Nguyen on 12/2/18.
//

#ifndef CITYOFSJ_USERFACADE_H
#define CITYOFSJ_USERFACADE_H

#include "Restaurants.h"
#include "Attractions.h"

class UserFacade {
private:
    std::string name, description;
    int fav, rating;
public:
    void initialize();
    void addPlace(int choice);
};

#endif //CITYOFSJ_USERFACADE_H
