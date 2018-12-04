//
// Created by Linda Nguyen on 11/25/18.
//

#include "Restaurants.h"

Restaurant::Restaurant()
{
    //std::cout << "Constructing a Restaurant!\n";
}

Restaurant::~Restaurant()
{
    std::cout << "Destructing a Restaurant...\n";
}

Restaurant::Restaurant(std::string name, std::string description, bool favorite, int rating)
{
    this->name = name;
    this->description = description;
    this->favorite = favorite;
    this->rating = rating;
}

void Restaurant::createPlace(std::string name, std::string description, bool favorite, int rating)
{
    Restaurant *p = new Restaurant(name, description, favorite, rating);
    restaurants.push_back (p);
    //std::cout << "A restaurant has been added to the vector!\n";
}

void Restaurant::listing()
{
    std::cout << "\n\t\tRESTAURANTS\n---------------------------\n";
    auto tempIt = restaurants.begin();
    for(auto i = tempIt; tempIt != restaurants.end(); tempIt++)
    {
        (*tempIt)->getListing();
    }
}

void Restaurant::listFavorites() {
    auto tempIt = restaurants.begin();
    for(auto i = tempIt; tempIt != restaurants.end(); tempIt++)
    {
        if((*tempIt)->getFavorite())
            (*tempIt)->getListing();
    }
}
