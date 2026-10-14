#include "../include/Order.h"

#include <iostream>

using namespace std;

OrderItem::OrderItem(const Food& food, int quantity)
    : food(food), quantity(quantity) {}

const Food& OrderItem::getFood() const {
    return food;
}

int OrderItem::getQuantity() const {
    return quantity;
}

double OrderItem::getLineTotal() const {
    return food.getPrice() * quantity;
}

void OrderItem::addQuantity(int amount) {
    if (amount > 0) {
        quantity += amount;
    }
}

void OrderItem::display() const {
    cout << food.getName() << " x " << quantity
         << " = $" << getLineTotal() << '\n';
}

void Order::addItem(const Food& food, int quantity) {
    if (quantity <= 0) {
        return;
    }

    for (vector<OrderItem>::iterator it = items.begin(); it != items.end(); ++it) {
        if (it->getFood().getId() == food.getId()) {
            it->addQuantity(quantity);
            return;
        }
    }

    items.push_back(OrderItem(food, quantity));
}

double Order::calculateTotal() const {
    double total = 0.0;

    for (vector<OrderItem>::const_iterator it = items.begin(); it != items.end(); ++it) {
        total += it->getLineTotal();
    }

    return total;
}

void Order::displayOrder() const {
    if (items.empty()) {
        cout << "Your order is empty.\n";
        return;
    }

    cout << "\nCurrent Order\n";
    cout << "----------------\n";

    for (vector<OrderItem>::const_iterator it = items.begin(); it != items.end(); ++it) {
        it->display();
    }

    cout << "Total: $" << calculateTotal() << '\n';
}

bool Order::isEmpty() const {
    return items.empty();
}

void Order::clearOrder() {
    items.clear();
}
