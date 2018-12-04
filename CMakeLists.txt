cmake_minimum_required(VERSION 3.12)
project(CityofSJ)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(CityofSJ
        Attractions.cpp
        Attractions.h
        CityCategory.cpp
        CityCategory.h
        CityCategoryFactory.cpp
        CityCategoryFactory.h
        CityCategoryIterator.cpp
        CityCategoryIterator.h
        Iterator.h
        main.cpp
        Restaurants.cpp
        Restaurants.h
        MainMenu.cpp
        MainMenu.h
        UserFacade.cpp
        UserFacade.h)
