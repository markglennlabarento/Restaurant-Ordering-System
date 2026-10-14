#ifndef CUSTOMER_H
#define CUSTOMER_H

using namespace std;
#include <string>

class Customer {
private:
    string name;
    string phone;

public:
    Customer(string name = "Guest", string phone = "N/A");

    string getName() const;
    string getPhone() const;
    void setName(string name);
    void setPhone(string phone);
    void displayCustomerInfo() const;
};

#endif