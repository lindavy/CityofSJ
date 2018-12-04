//
// Created by Linda Nguyen on 11/24/18.
//

#ifndef CITYOFSJ_ATTRACTIONS_H
#define CITYOFSJ_ATTRACTIONS_H

#include "CityCategory.h"

class Attraction : public CityCategory {
public:
    Attraction();
    ~Attraction() override;
    Attraction(std::string name, std::string description, bool favorite, int rating);

    void createPlace(std::string name, std::string description, bool favorite, int rating) override;
};

#endif //CITYOFSJ_ATTRACTIONS_H
