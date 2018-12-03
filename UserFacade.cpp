//
// Created by Linda Nguyen on 12/2/18.
//
#include "UserFacade.h"

void UserFacade::initialize(std::vector<CityCategory *> * CityCategories)
{
    category = cityCategoryFactory.create(CityCategoryFactory::RESTAURANT);
    category->createPlace("T4", "too many options", false, 3);
    category->createPlace("Fantasia", "good boba", true, 3);
    category->createPlace("Ten Ren", "the only one for me", true, 5);
    CityCategories->push_back(category);
    std::cout << "Restaurants are all entered.\n";

    category = cityCategoryFactory.create(CityCategoryFactory::ATTRACTION);
    category->createPlace("Great America", "Theme Park", true, 3);
    category->createPlace("Golfland", "Mini Golf", false, 2);
    category->createPlace("Japanese Friendship Garden", "Park", true, 5);
    CityCategories->push_back(category);
    //std::cout << "Att Address: " << &attractions;
    std::cout << "Attractions are all entered.\n";
}

CityCategory * UserFacade::addPlace(int choice)
{
    std::cout << "Name: "; std::cin >> name;
    std::cout << "Description: "; std::cin >> description;
    std::cout << "Favorite(1/0): "; std::cin >> fav;
    std::cout << "Rating: "; std::cin >> rating;

    if(choice == 1)
    {
        category = cityCategoryFactory.create(CityCategoryFactory::RESTAURANT);
    }
    else if(choice == 2)
    {
        category = cityCategoryFactory.create(CityCategoryFactory::ATTRACTION);
    }

    category->createPlace(name, description, fav, rating);
    return category;
}
