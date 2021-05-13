#ifndef MENU_H
#define MENU_H

#include "main_menu.h"
#include "new_game_menu.h"
#include "../engine/settings.h"

//@formatter:off
class Menu {
    Settings *settings;
    int submenu;

    MainMenu mainMenu;
    NewGameMenu newGameMenu;

public:
    explicit Menu(Settings*);
    void display();
    void update();
};

#endif //MENU_H