//
// Created by Linda Nguyen on 11/25/18.
//
#include "Attractions.h"

Attraction::Attraction()
{
    //std::cout << "Constructing an Attraction!\n";
}


Attraction::~Attraction()
{
    std::cout << "Destructing an Attraction...\n";
}

// Overload Constructor
Attraction::Attraction(std::string name, std::string description, bool favorite, int rating)
{
    this->name = name;
    this->description = description;
    this->favorite = favorite;
    this->rating = rating;
}

void Attraction::createPlace(std::string name, std::string description, bool favorite, int rating)
{
    Attraction *p = new Attraction(name, description, favorite, rating);
    attractions.push_back (p);
    //std::cout << "An attraction has been added to the vector!\n";
    //attractions.push_back(new Attraction(name, description, favorite, rating)); <--- creating a vector of objects isn't flexible
}

void Attraction::listing()
{
    //std::vector<Attraction *>::iterator tempIt = attractions.begin(); <-- use auto for readability
    std::cout << "\n\t\tATTRACTIONS\n---------------------------\n";
    auto tempIt = attractions.begin();
    for(auto i = tempIt; tempIt != attractions.end(); tempIt++)
    {
        (*tempIt)->getListing();
    }
}

bool Attraction::getFavorite()
{
    return this->favorite;
}

void Attraction::listFavorites()
{
    auto tempIt = attractions.begin();
    for(auto i = tempIt; tempIt != attractions.end(); tempIt++)
    {
        if((*tempIt)->getFavorite())
            (*tempIt)->getListing();
    }
}