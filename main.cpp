#include <iostream>
#include <string>
#include "CityCategory.h"
#include "Restaurants.h"

int main() {
    std::cout << "Thank you for trying out the City of SJ's itinerary! Use the application to bookmark your favorite places and services!\n\n";
    std::cout << "------- Which category would you like to see? -------\n\n";
    std::cout << "1 - Restaurants\n2 - Public Transit Systems\n3 - Attractions\n4 - Local Schools\n5 - Services\n\nEnter: ";

    int choice; std::cin >> choice;

    CityCategory linda;
    linda.createPlace(choice, "T4", "Milk Tea Shop", false, 3);
    linda.getListing();
    return 0;
}