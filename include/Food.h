#ifndef FOOD_H
#define FOOD_H

using namespace std;
#include <string>

class Product {
protected:
    int id;
    string name;
    double price;

public:
    Product(int id, string name, double price);
    virtual ~Product() = default;

    virtual int getId() const;
    virtual string getName() const;
    virtual double getPrice() const;
    virtual void displayProduct() const = 0;
};

class Food : public Product {
public:
    Food(int id, string name, double price);

    int getId() const override;
    string getName() const override;
    double getPrice() const override;
    void displayFood() const;
    void displayProduct() const override;
};

#endif