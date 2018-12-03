#include <iostream>
#include <string>
#include "MainMenu.h"

/*
 * Still needs to support users' inputs!!
 * Needs to handle dangling pointers !!
 */

int main() {
    auto * menu = new MainMenu();
    menu->viewAll();

    delete menu;
    return 0;
}