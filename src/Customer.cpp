#include "../include/Customer.h"

#include <iostream>

using namespace std;

Customer::Customer(string name, string phone)
    : name(name), phone(phone) {}

string Customer::getName() const {
    return name;
}

string Customer::getPhone() const {
    return phone;
}

void Customer::setName(string name) {
    this->name = name;
}

void Customer::setPhone(string phone) {
    this->phone = phone;
}

void Customer::displayCustomerInfo() const {
    cout << "Customer: " << name << " | Phone: " << phone << '\n';
}
