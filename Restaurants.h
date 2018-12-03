//
// Created by Linda Nguyen on 11/25/18.
//

#ifndef CITYOFSJ_RESTAURANTS_H
#define CITYOFSJ_RESTAURANTS_H

#include "CityCategory.h"

class Restaurant : public CityCategory {
    
private:
    std::vector<Restaurant *> restaurants;
    
public:
    Restaurant();
    ~Restaurant() override;
    Restaurant(std::string name, std::string description, bool favorite, int rating);
    void createPlace(
                     std::string name, std::string description, bool favorite, int rating) override;
    void listing() override;
};


#endif //CITYOFSJ_RESTAURANTS_H
