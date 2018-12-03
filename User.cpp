//
// Created by Linda Nguyen on 12/1/18.
//


#include "User.h"
// 1. read the city category
// 2. add/remove a category
// 3. choose to continue to go back

User::User() : CityCategoriesIterator(&CityCategories) {
}

void User::initialize()
{
    restaurants->createPlace("T4", "too many options", false, 3);
    restaurants->createPlace("Fantasia", "good boba", true, 3);
    restaurants->createPlace("Ten Ren", "the only one for me", true, 5);
    CityCategories.push_back(restaurants);
    std::cout << "Restaurants are all entered.\n";

    attractions->createPlace("Great America", "Theme Park", true, 3);
    attractions->createPlace("Golfland", "Mini Golf", false, 2);
    attractions->createPlace("Japanese Friendship Garden", "Park", true, 5);
    CityCategories.push_back(attractions);
    //std::cout << "Att Address: " << &attractions;
    std::cout << "Attractions are all entered.\n";

}

void User::viewAll()
{
    while (CityCategoriesIterator.hasNext()) {
        CityCategoriesIterator.next()->listing();
    }
    CityCategoriesIterator.resetPosition();
}

void User::viewCategory()
{
    std::cout << "------- Which category would you like to view? -------\n\n";
    std::cout << "1 - Restaurants\n2 - Public Transit Systems\n3 - Attractions\n4 - Local Schools\n5 - Services\n\nEnter: ";
    std::cin >> choice;

    if (choice == 1)
    {
        //restaurants->listing();
        CityCategories.at(0)->listing();
    }
    else if (choice == 2)
    {
        CityCategories.at(1)->listing();
    }
}

//void addPlace(category cc)
//{
//    if(cc == category::restaurant)
//    {
//
//    }
//    else if(cc == category::attraction)
//    {
//        CityCategory *x = new Attraction();
//
//    }
//}

