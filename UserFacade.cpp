//
// Created by Linda Nguyen on 12/2/18.
//
#include "UserFacade.h"

UserFacade::UserFacade() : CityCategoriesIterator(getCityCategories()) {
}

void UserFacade::initialize()
{
    std::cout << "Thank you for trying out the City of SJ's itinerary! Use the application to bookmark your favorite places and services!\n\n";

    category = cityCategoryFactory.create(CityCategoryFactory::RESTAURANT);
    category->createPlace("T4", "too many options", false, 3);
    category->createPlace("Fantasia", "good boba", true, 3);
    category->createPlace("Ten Ren", "the only one for me", true, 5);
    CityCategories.push_back(category);
    //std::cout << "Restaurants are all entered.\n";

    category = cityCategoryFactory.create(CityCategoryFactory::ATTRACTION);
    category->createPlace("Great America", "Theme Park", true, 3);
    category->createPlace("Golfland", "Mini Golf", false, 2);
    category->createPlace("Japanese Friendship Garden", "Park", true, 5);
    CityCategories.push_back(category);
    //std::cout << "Attractions are all entered.\n";
}

void UserFacade::addPlace(int choice)
{
    std::getline(std::cin, trash);
    std::cout << "Name: ";
    std::getline(std::cin, name);
    std::cout << "Description: ";
    std::getline(std::cin, description);
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
    CityCategories.push_back(category);
}

void UserFacade::view()
{
    int sel, sel2;
    std::cout << "\tVIEWING Options\n-----------------------\n"
                 "1. View All\n2. View Category\n3. View Favorites\n4. Return\n\nSelection: ";
    std::cin >> sel;
    if(sel == 1)
    {
        while (CityCategoriesIterator.hasNext())
        {
            CityCategoriesIterator.next()->listing();
        }
        CityCategoriesIterator.resetPosition();
    }
    else if(sel == 2)
    {
        std::cout << "Enter choice:\n1. View Restaurants\n2. View attractions\n";
        std::cin >> sel2;
        int i;

        if(sel2 == 1)
        {
            CityCategories.at(0)->listing();

        }
        else if(sel2 == 2)
        {
            CityCategories.at(1)->listing();
        }
    }
    else if(sel == 3)
    {
        CityCategories.at(1)->listFavorites();
    }
    else if(sel == 4)
    {
        return;
    }
}

void UserFacade::viewCategory()
{
    int choice = 0;
    std::cout << "------- Which category would you like to view? -------\n\n";
    std::cout << "1 - Restaurants\n2 - Public Transit Systems\n3 - Attractions\n4 - Local Schools\n5 - Services\n\nEnter: ";
    std::cin >> choice;

    if (choice == 1)
    {
        CityCategories.at(0)->listing();
    }
    else if (choice == 2)
    {
        CityCategories.at(1)->listing();
    }
}
