#ifndef PAYMENT_H
#define PAYMENT_H

class Payment {
public:
    virtual ~Payment() = default;
    virtual bool processPayment(double total, double amountPaid) const = 0;
};

class CashPayment : public Payment {
public:
    bool processPayment(double total, double amountPaid) const override;
};

class CardPayment : public Payment {
public:
    bool processPayment(double total, double amountPaid) const override;
};

#endif