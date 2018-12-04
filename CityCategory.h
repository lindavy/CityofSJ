//
// Created by Linda Nguyen on 11/16/18.
//

#ifndef CITYOFSJ_CITYCATEGORY_H
#define CITYOFSJ_CITYCATEGORY_H
#include <iostream>
#include <string>
#include <vector>

/*
 * Categories:
 * 1. Restaurant
 * 2. Public Transits
 * 3. Attractions
 * 4. Schools
 * 5. Services
 *
 * Information:
 * Name of Place
 * Description of Place
 * MainMenu Marked as Favorite or Not
 * Rating on Scale of 1-5 (5 - Great)
 */

class CityCategory {
    
protected:
    std::string name;
    std::string description;
    bool favorite = false;
    int rating = 0;

public:
    CityCategory();
    virtual ~CityCategory();
    
    // Add New Place
    virtual void createPlace(std::string name, std::string description, bool favorite, int rating) = 0;
    
    // Print Vector maps
    void getListing();
    virtual void listing() = 0;
    
    // Accessors
    virtual std::string getName() = 0;
    std::string getDescription();
    bool getFavorite();
    virtual void listFavorites() = 0;
    int getRating();

    virtual void setName(std::string name) = 0;
    virtual void changeName() = 0;
    
    // Mutators

    void setDescription(std::string blurb);
    void setFavorite(bool fav);
    void setRating(int rate);
};

#endif //CITYOFSJ_CITYCATEGORY_H
