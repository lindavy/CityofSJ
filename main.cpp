#include <iostream>
#include <string>
#include "MainMenu.h"

int main() {
    auto * menu = new MainMenu();
    bool active = true;
    int choice;

    while(active)
    {
        std::cout << "\tMENU Options\n-----------------------\n"
                     "1. View \n2. Add\n3. Edit\n4. Quit App\n\nSelection: ";
        std::cin >> choice;
        std::cout << "\n\n";

        if(choice == 1)
            menu->view();
        else if(choice == 2)
            menu->add();
        else if(choice == 3)
            menu->edit();
        else
            active = false;
    }
    std::cout << "User has quit the application!!\n";

    delete menu;
    return 0;
}
