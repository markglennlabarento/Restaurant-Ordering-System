#ifndef MENU_H
#define MENU_H

using namespace std;
#include "Food.h"
#include <vector>

class Menu {
private:
    vector<Food> foods;

public:
    Menu();

    void displayMenu() const;
    Food* findFood(int id);
};

#endif