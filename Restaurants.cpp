//
// Created by Linda Nguyen on 11/25/18.
//

#include "Restaurants.h"

Restaurant::Restaurant()
{
    //std::cout << "Constructing a Restaurant!\n";
}

Restaurant::Restaurant(std::string name, std::string description, bool favorite, int rating) : CityCategory(name,
                                                                                                            description,
                                                                                                            favorite,
                                                                                                            rating) {

}

Restaurant::~Restaurant()
{
    std::cout << "Destructing a Restaurant...\n";
}

void Restaurant::createPlace(std::string name, std::string description, bool favorite, int rating)
{
    categoryList.push_back(new Restaurant(name, description, favorite, rating));
}
