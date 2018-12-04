//
// Created by Linda Nguyen on 11/25/18.
//
#include "Attractions.h"

Attraction::Attraction()
{
}

Attraction::Attraction(std::string name, std::string description, bool favorite, int rating) : CityCategory(name,
                                                                                                            description,
                                                                                                            favorite,
                                                                                                            rating) {

}

Attraction::~Attraction()
{
    std::cout << "Destructing an Attraction...\n";
}

void Attraction::createPlace(std::string name, std::string description, bool favorite, int rating)
{
    categoryList.push_back(new Attraction(name, description, favorite, rating));
}
