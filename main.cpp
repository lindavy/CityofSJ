#include <iostream>
#include <string>
#include "CityCategory.h"
#include "Attractions.h"
#include "Restaurants.h"

/*
 * Still needs to support users' inputs!!
 */

void addAttractions()
{
    // Attractions
    Attraction *attractions = new Attraction();
    attractions->createPlace("Great America", "Theme Park", true, 3);
    attractions->createPlace("Golfland", "Mini Golf", false, 2);
    attractions->createPlace("Japanese Friendship Garden", "Park", true, 5);
    std::cout << "Attractions are all entered.\n\n";
    attractions->listing();
    
}

void addRestaurants()
{
    // Attractions
    Restaurant *restaurants = new Restaurant();
    restaurants->createPlace("T4", "too many options", false, 3);
    restaurants->createPlace("Fantasia", "good boba", true, 3);
    restaurants->createPlace("Ten Ren", "the only one for me", true, 5);
    std::cout << "Restaurants are all entered.\n\n";
    restaurants->listing();
    
}

int main() {
    std::cout << "Thank you for trying out the City of SJ's itinerary! Use the application to bookmark your favorite places and services!\n\n";
    //    std::cout << "------- Which category would you like to see? -------\n\n";
    //    std::cout << "------- Which category would you like to add to? -------\n\n";
    //    std::cout << "1 - Restaurants\n2 - Public Transit Systems\n3 - Attractions\n4 - Local Schools\n5 - Services\n\nEnter: ";
    
    addAttractions();
    addRestaurants();
    
    // Delete Pointers to Derived Classes !!
    // delete attractions;
    
    return 0;
}
