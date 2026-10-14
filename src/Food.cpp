#include "../include/Food.h"
#include <iostream>

using namespace std;

Product::Product(int id, string name, double price)
    : id(id), name(name), price(price) {}

int Product::getId() const {
    return id;
}

string Product::getName() const {
    return name;
}

double Product::getPrice() const {
    return price;
}

Food::Food(int id, string name, double price)
    : Product(id, name, price) {}

int Food::getId() const {
    return Product::getId();
}

string Food::getName() const {
    return Product::getName();
}

double Food::getPrice() const {
    return Product::getPrice();
}

void Food::displayFood() const {
    cout << id << ". "
         << name << " - $"
         << price << '\n';
}

void Food::displayProduct() const {
    displayFood();
}