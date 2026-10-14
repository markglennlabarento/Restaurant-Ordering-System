#include "../include/Menu.h"

#include <iostream>

using namespace std;

Menu::Menu() {
    foods.push_back(Food(1, "Burger", 120.00));
    foods.push_back(Food(2, "Pizza", 180.00));
    foods.push_back(Food(3, "Pasta", 150.00));
    foods.push_back(Food(4, "Fries", 70.00));
    foods.push_back(Food(5, "Soft Drink", 45.00));
}

void Menu::displayMenu() const {
    cout << "\nAvailable Foods\n";
    cout << "----------------\n";

    for (vector<Food>::const_iterator it = foods.begin(); it != foods.end(); ++it) {
        it->displayFood();
    }
}

Food* Menu::findFood(int id) {
    for (vector<Food>::iterator it = foods.begin(); it != foods.end(); ++it) {
        if (it->getId() == id) {
            return &(*it);
        }
    }

    return nullptr;
}
