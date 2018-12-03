//
// Created by Linda Nguyen on 12/1/18.
//


#include "MainMenu.h"

MainMenu::MainMenu() {
    userFacade = new UserFacade();
    userFacade->initialize();
}

MainMenu::~MainMenu() {
    delete userFacade;
}

void MainMenu::viewAll() {
    userFacade->viewAll();
}
