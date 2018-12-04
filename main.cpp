#include <iostream>
#include <string>
#include "MainMenu.h"

/*
 * Still needs to support users' inputs!!
 * Needs to handle dangling pointers !!
 */

int main() {
    auto * menu = new MainMenu();
    bool active = true;
    int choice;

    while(active)
    {
        std::cout << "\tMENU Options\n-----------------------\n"
                     "1. View \n2. Add\n3. Edit\n4. Delete\n\nSelection: ";
        std::cin >> choice;
        std::cout << "\n\n";

        if(choice == 1)
            menu->view();
        else if(choice == 2)
            std::cout << "doing things\n";
        else
            active = false;

//        switch(choice)
//        {
//            case 1:
//            {
//                menu->view();
//            }
//            case 2:
//            {
//                std::cout << "doing things\n";
//            }
//            case 3:
//                active = false;
//        }
    }


    delete menu;
    return 0;
}