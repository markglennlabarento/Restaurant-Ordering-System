#ifndef ORDER_H
#define ORDER_H

using namespace std;
#include "Food.h"
#include <vector>

class OrderItem {
private:
    Food food;
    int quantity;

public:
    OrderItem(const Food& food, int quantity);

    const Food& getFood() const;
    int getQuantity() const;
    double getLineTotal() const;
    void addQuantity(int amount);
    void display() const;
};

class Order {
private:
    vector<OrderItem> items;

public:
    void addItem(const Food& food, int quantity);
    double calculateTotal() const;
    void displayOrder() const;
    bool isEmpty() const;
    void clearOrder();
};

#endif