#include "../include/Restaurant.h"

#include <iostream>

using namespace std;

Restaurant::Restaurant()
    : customer("Guest", "N/A"), payment(new CashPayment()) {}

Restaurant::~Restaurant() {
    delete payment;
}

void Restaurant::run() {
    promptCustomerDetails();

    int choice = 0;

    while (true) {
        showMainMenu();
        cout << "Select an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                placeOrder();
                break;
            case 2:
                checkout();
                break;
            case 3:
                cout << "Thank you for visiting!\n";
                return;
            default:
                cout << "Invalid option. Please try again.\n";
        }
    }
}

void Restaurant::showMainMenu() {
    cout << "\nRestaurant Ordering System\n";
    cout << "1. Place Order\n";
    cout << "2. Checkout\n";
    cout << "3. Exit\n";
}

void Restaurant::promptCustomerDetails() {
    string name;
    string phone;

    cout << "Enter customer name: ";
    cin >> name;
    cout << "Enter customer phone: ";
    cin >> phone;

    customer.setName(name);
    customer.setPhone(phone);
    customer.displayCustomerInfo();
}

void Restaurant::placeOrder() {
    int foodId = 0;

    while (true) {
        menu.displayMenu();
        cout << "Enter food ID to add to the order (0 to finish): ";
        cin >> foodId;

        if (foodId == 0) {
            break;
        }

        Food* selectedFood = menu.findFood(foodId);
        if (selectedFood == nullptr) {
            cout << "Food not found. Please choose another item.\n";
            continue;
        }

        int quantity = 0;
        cout << "Enter quantity: ";
        cin >> quantity;

        if (quantity <= 0) {
            cout << "Quantity must be greater than zero.\n";
            continue;
        }

        order.addItem(*selectedFood, quantity);
        cout << "Item added to order.\n";
    }
}

void Restaurant::checkout() {
    if (order.isEmpty()) {
        cout << "There are no items in your order.\n";
        return;
    }

    cout << "\nCustomer checkout for: " << customer.getName() << "\n";
    order.displayOrder();

    double total = order.calculateTotal();
    double amountPaid = 0.0;
    int paymentMethod = 0;

    cout << "Choose payment method:\n";
    cout << "1. Cash\n";
    cout << "2. Card\n";
    cout << "Selection: ";
    cin >> paymentMethod;

    if (paymentMethod == 2) {
        delete payment;
        payment = new CardPayment();
    } else {
        delete payment;
        payment = new CashPayment();
    }

    cout << "Enter amount paid: $";
    cin >> amountPaid;

    if (payment->processPayment(total, amountPaid)) {
        cout << "Order completed successfully.\n";
        order.clearOrder();
    }
}
