////
//// Created by Linda Nguyen on 11/16/18.
////
#include "CityCategory.h"

// Default
CityCategory::CityCategory()
{
    this->name = "CmpE 135 Course\n";
    this->description = "Object-Oriented Design\n";
    this->favorite = true;
    this->rating = 5;
}

// Destructor
CityCategory::~CityCategory()
{
    std::cout << "Destructing a CityCategory...\n";
};

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
//std::string CityCategory::getName()
//{
//    return name;
//}

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
//void CityCategory::setName(std::string name)
//{
//    this->name = name;
//}
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
