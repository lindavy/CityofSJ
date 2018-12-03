//
// Created by Linda Nguyen on 12/2/18.
//
#include "UserFacade.h"

//void UserFacade::initialize()
//{
//    Restaurant restaurant;
//    restaurants->createPlace("T4", "too many options", false, 3);
//    restaurants->createPlace("Fantasia", "good boba", true, 3);
//    restaurants->createPlace("Ten Ren", "the only one for me", true, 5);
//    CityCategories.push_back(restaurants);
//    std::cout << "Restaurants are all entered.\n";
//
//    attractions->createPlace("Great America", "Theme Park", true, 3);
//    attractions->createPlace("Golfland", "Mini Golf", false, 2);
//    attractions->createPlace("Japanese Friendship Garden", "Park", true, 5);
//    CityCategories.push_back(attractions);
//    //std::cout << "Att Address: " << &attractions;
//    std::cout << "Attractions are all entered.\n";
//}

void UserFacade::addPlace(int choice)
{
    std::cout << "Name: "; std::cin >> name;
    std::cout << "Description: "; std::cin >> description;
    std::cout << "Favorite(1/0): "; std::cin >> fav;
    std::cout << "Rating: "; std::cin >> rating;

    if(choice == 1)
    {
        Restaurant(name, description, fav, rating);
    }
    else if(choice == 2)
    {
        Attraction(name, description, fav, rating);
    }

}
