#include "../include/Payment.h"

#include <iostream>

using namespace std;

bool CashPayment::processPayment(double total, double amountPaid) const {
    if (amountPaid >= total) {
        cout << "Cash payment accepted.\n";
        if (amountPaid > total) {
            cout << "Change: $" << (amountPaid - total) << '\n';
        }
        return true;
    }

    cout << "Insufficient cash payment.\n";
    return false;
}

bool CardPayment::processPayment(double total, double amountPaid) const {
    if (amountPaid >= total) {
        cout << "Card payment approved.\n";
        return true;
    }

    cout << "Card payment declined due to insufficient amount.\n";
    return false;
}
