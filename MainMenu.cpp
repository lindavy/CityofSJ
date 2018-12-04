//
// Created by Linda Nguyen on 12/1/18.
//


#include "MainMenu.h"

MainMenu::MainMenu()
{
    userFacade = new UserFacade();
    userFacade->initialize();
}

MainMenu::~MainMenu() {
    delete userFacade;
}

void MainMenu::view() {
    userFacade->view();
}

void MainMenu::add() {
    std::cout << "Which category do you want to add to?\n\n1. Restaurant \n2. Attraction\n3. Return\n\nSelection: ";
    std::cin >> select;
    if(select == 3)
        return;
    userFacade->addPlace(select);
}
