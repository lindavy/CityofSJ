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
    std::cout << "Restaurants are all entered.\n";

    category = cityCategoryFactory.create(CityCategoryFactory::ATTRACTION);
    category->createPlace("Great America", "Theme Park", true, 3);
    category->createPlace("Golfland", "Mini Golf", false, 2);
    category->createPlace("Japanese Friendship Garden", "Park", true, 5);
    CityCategories.push_back(category);
    //std::cout << "Att Address: " << &attractions;
    std::cout << "Attractions are all entered.\n";
}

void UserFacade::addPlace(int choice)
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
    CityCategories.push_back(category);
}

void UserFacade::view()
{
    int sel, sel2;
    std::cout << "Enter choice:\n1. View all\n2. View category\n3. View favorites\n4. View saved\n";
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
        /*while(CityCategoriesIterator.hasNext()) //hard coded
        {
            for(i = 0; i < 3; i++)
            {
            if (sel2 == 1)
            {
                CityCategoriesIterator.next()->listing();
                i++;
            }
            else if (sel2 == 2)
            {
                CityCategoriesIterator.next()->listing();
                i++;
            }
        }*/
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
        //print favs
    }
    else if(sel == 4)
    {
        //view saved
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
        //restaurants->listing();
        CityCategories.at(0)->listing();
    }
    else if (choice == 2)
    {
        CityCategories.at(1)->listing();
    }
}
