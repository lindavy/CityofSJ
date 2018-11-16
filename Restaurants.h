//
// Created by Linda Nguyen on 11/16/18.
//

#ifndef CITYOFSJ_RESTAURANTS_H
#define CITYOFSJ_RESTAURANTS_H

#include "CityCategory.h"

class Restaurant : public CityCategory { // <--- ERROR 

private:
    std::string name;
    std::string description;
    bool favorite = false; // User marked as favorite
    int rating = 0;  // 5 - Great

public:
    Restaurant()
    {
        std::cout << "Creating restaurant listing...\n";
    }

    Restaurant(std::string name, std::string description, bool favorite, int rating)
        : name(name), description(description), favorite(favorite), rating(rating)
    {
        // initialized place
    }

    void addPlace(std::string name, std::string description, bool favorite, int rating)
    {
        this->name = name;
        this->description = description;
        this->favorite = favorite;
        this->rating = rating;
    }

    void getListing()
    {
        std::cout << "------- Restaurants -------\n\n";
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

    std::string getName()
    {
        return name;
    }

    std::string getDescription()
    {
        return description;
    }

    void markFavorite()
    {
        // If user has not starred the place yet, set favorite to true otherwise deselect to false
        if(!favorite)
            favorite = true;
        else
            favorite = false;
    }

    int getRating()
    {
        return rating;
    }

    void setRating(int rate)
    {
        rating = rate;
    }
};


#endif //CITYOFSJ_RESTAURANTS_H
