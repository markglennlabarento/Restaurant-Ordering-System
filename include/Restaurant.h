#ifndef RESTAURANT_H
#define RESTAURANT_H

#include "Customer.h"
#include "Menu.h"
#include "Order.h"
#include "Payment.h"

class Restaurant {
private:
    Menu menu;
    Order order;
    Customer customer;
    Payment* payment;

public:
    Restaurant();
    ~Restaurant();

    void run();
    void showMainMenu();
    void promptCustomerDetails();
    void placeOrder();
    void checkout();
};

#endif