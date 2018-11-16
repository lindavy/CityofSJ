//
// Created by Linda Nguyen on 11/16/18.
//
#include "CityCategory.h"

void CityCategory::createPlace(int choice, std::string name, std::string description, bool favorite, int rating)
{
//    this->name = name;
//    this->description = description;
//    this->favorite = favorite;
//    this->rating = rating;
//    selectCategory(choice);

    category_t category;
    if(choice == 1)
    {
        category = restaurants;
        Restaurant *place = new Restaurant();
        //place->addPlace(name, description, favorite, rating);
    }
    else if (choice == 2)
        category = transits;
    else if (choice == 3)
        category = attractions;
    else if (choice == 4)
        category = schools;
    else
        category = services;
}

// ***** PRINT FUNCTIONS *****
void CityCategory::getListing()
{
    std::cout << "------- City Categories -------\n\n";
    if (favorite)
    {
        std::cout << "*    Name: " << getName() << std::endl;
        std::cout << "*    Description: " << getDescription() << std::endl;
        std::cout << "*    Rating: " << getRating() << std::endl;
    }
    else
    {
        std::cout << "|    Name: " << getName() << std::endl;
        std::cout << "|    Description: " << getDescription() << std::endl;
        std::cout << "|    Rating: " << getRating() << std::endl;
    }
}

// ***** SETTERS & GETTERS *****
std::string CityCategory::getName()
{
    return name;
}

std::string CityCategory::getDescription()
{
    return description;
}

bool CityCategory::getFavorite()
{
    return favorite;
}
int CityCategory::getRating()
{
    return rating;
}
void CityCategory::setName(std::string name)
{
    this->name = name;
}
void CityCategory::setDescription(std::string blurb)
{
    this->description = blurb;
}
void CityCategory::setFavorite(bool fav)
{
    this->favorite = fav;
}
void CityCategory::setRating(int rate)
{
    rating = rate;
}