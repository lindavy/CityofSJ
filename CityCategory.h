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
 * User Marked as Favorite or Not
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
    virtual void createPlace(
                             std::string name, std::string description, bool favorite, int rating);
    
    // Print Composites
    virtual void getListing();
    
    virtual void listing() = 0;
    
    // Accessors
    std::string getName();
    std::string getDescription();
    bool getFavorite();
    int getRating();
    
    // Mutators
    void setName(std::string name);
    void setDescription(std::string blurb);
    void setFavorite(bool fav);
    void setRating(int rate);
};

#endif //CITYOFSJ_CITYCATEGORY_H
