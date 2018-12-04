////
//// Created by Linda Nguyen on 11/16/18.
////
#include "CityCategory.h"

CityCategory::CityCategory(std::string name, std::string description, bool favorite, int rating) {
    this->name = name;
    this->description = description;
    this->favorite = favorite;
    this->rating = rating;
}

// Print Place Information
void CityCategory::getListing()
{
    if (favorite)
    {
        std::cout << "*    Name: " << getName() << std::endl;
        std::cout << "*    Description: " << getDescription() << std::endl;
        std::cout << "*    Rating: " << getRating() << "\n\n";
    }
    else
    {
        std::cout << "|    Name: " << getName() << std::endl;
        std::cout << "|    Description: " << getDescription() << std::endl;
        std::cout << "|    Rating: " << getRating() << "\n\n";
    }
}

// Accessors & Mutators
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
