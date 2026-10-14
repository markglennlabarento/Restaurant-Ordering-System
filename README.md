# Restaurant Ordering System (C++ Advanced OOP)

A console-based restaurant ordering application built with C++ and advanced object-oriented programming concepts. The project is organized into separate classes and files to demonstrate modular design, inheritance, polymorphism, abstraction, and encapsulation.

## Features

- Display a menu of food items
- Add food items by ID and quantity
- Track multiple items in a single order
- Calculate total order cost
- Support customer details input
- Process cash and card payments through a polymorphic payment system
- Show the final order summary before checkout
- Keep responsibilities separated into reusable classes and files

## Technologies Used

- Language: C++
- Standard: C++17
- Programming Paradigm: Advanced OOP
- Compiler: GCC / MinGW
- Editor: Visual Studio Code

## Project Structure

```text
Restaurant Ordering System/
├── include/
│   ├── Customer.h
│   ├── Food.h
│   ├── Menu.h
│   ├── Order.h
│   ├── Payment.h
│   └── Restaurant.h
├── src/
│   ├── Customer.cpp
│   ├── Food.cpp
│   ├── Menu.cpp
│   ├── Order.cpp
│   ├── Payment.cpp
│   ├── Restaurant.cpp
│   └── main.cpp
├── .vscode/
│   ├── launch.json
│   └── tasks.json
├── README.md
└── .gitignore
```

## Class Overview

| Class | Responsibility |
|---|---|
| `Product` | Abstract base class for restaurant items |
| `Food` | Represents a food item with ID, name, and price |
| `Menu` | Stores and displays the available food items |
| `OrderItem` | Represents a single item in an order with quantity and subtotal |
| `Order` | Manages order items and calculates totals |
| `Customer` | Stores customer information such as name and phone |
| `Payment` | Abstract base class for payment processing |
| `CashPayment` | Handles cash payment processing |
| `CardPayment` | Handles card payment processing |
| `Restaurant` | Coordinates the overall ordering workflow |
| `main.cpp` | Starts the application |

## Advanced OOP Concepts Used

### 1. Encapsulation
Each class keeps its data protected or private and exposes only relevant behaviors through methods.

### 2. Abstraction
The system hides implementation details behind interfaces such as `Payment` and `Product`.

### 3. Inheritance
`Food` inherits from `Product`, and both payment classes inherit from `Payment`.

### 4. Polymorphism
The project uses virtual methods and base-class pointers to handle different payment types and product behavior uniformly.

### 5. Composition
`Restaurant` is composed of `Menu`, `Order`, `Customer`, and a payment object.

## Requirements

- C++17 compatible compiler
- GCC or MinGW on Windows
- Visual Studio Code recommended

## Build Instructions

From the project root, run:

```bash
g++ -std=c++17 -I. src/main.cpp src/Food.cpp src/Menu.cpp src/Order.cpp src/Payment.cpp src/Restaurant.cpp src/Customer.cpp -o restaurant_app.exe
```

Then run:

```bash
restaurant_app.exe
```

## Example Flow

```text
Enter customer name: Alice
Enter customer phone: 09123456789

Restaurant Ordering System
1. Place Order
2. Checkout
3. Exit
Select an option: 1

Available Foods
----------------
1. Burger - $120
2. Pizza - $180
3. Pasta - $150
...
Enter food ID to add to the order (0 to finish): 1
Enter quantity: 2

Customer checkout for: Alice
Current Order
----------------
Burger x 2 = $240
Total: $240
Choose payment method:
1. Cash
2. Card
Selection: 1
Enter amount paid: $500
Cash payment accepted.
Change: $260
Order completed successfully.
```

## Future Improvements

- [ ] Remove items from an order
- [ ] Update item quantities
- [ ] Add taxes and discounts
- [ ] Save order history to a file
- [ ] Add menu loading from a database or JSON file
- [ ] Add an admin dashboard for menu management
- [ ] Add unit tests
- [ ] Add a graphical user interface

## Learning Objectives

This project is intended to help learners understand:

- Classes and objects
- Inheritance and polymorphism
- Abstract classes and interfaces
- Encapsulation and modular design
- File-based project organization
- Payment strategy patterns in C++
- C++ multi-file compilation

## Author

C++ OOP practice project created for educational and practical learning purposes.
