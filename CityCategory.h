//
// Created by Linda Nguyen on 11/16/18.
//

#ifndef CITYOFSJ_CITYCATEGORY_H
#define CITYOFSJ_CITYCATEGORY_H
#include <iostream>
#include <string>
#include <vector>
#include "Restaurants.h"
// Categories: restaurants, public transit, attractions, schools, services

typedef enum
{
    restaurants = 1,
    transits = 2,
    attractions = 3,
    schools = 4,
    services = 5
} category_t;

class CityCategory {

private:

    std::string name;
    std::string description;
    bool favorite = false; // User marked as favorite
    int rating = 0;  // 5 - Great

    // Store list of categories
    std::vector<CityCategory> CityCategories;

public:

    void createPlace(int choice, std::string name, std::string description, bool favorite, int rating); // stores place info
    void getListing(); // prints place's info

    std::string getName();
    std::string getDescription();
    bool getFavorite();
    int getRating();

    void setName(std::string name);
    void setDescription(std::string blurb);
    void setFavorite(bool fav);
    void setRating(int rate);
};

#endif //CITYOFSJ_CITYCATEGORY_H
