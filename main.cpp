#include <iostream>
#include <vector>
#include "main.hpp"
using namespace std;

struct customerReccord
{
    string customerName;
    double accountBalance;
    double accountNumber;
    bool isAccountOverdrawn;
};

int main()
{
    vector<customerReccord *> bankCustomers;
    customerReccord *customer1 = nullptr;
    customer1 = new customerReccord;

    customer1->customerName = "John Doe";
    customer1->accountBalance = 1000.00;
    customer1->accountNumber = 123456789;
    customer1->isAccountOverdrawn = false;
    bankCustomers.push_back(customer1);
    isCustomerNoMoney(customer1);
    cout << "Customer Name: " << customer1->customerName << endl;
    cout << "Does Customer Money? " << customer1->isAccountOverdrawn << endl;
    cout << "Is the bank solvent?" <<
}

void isCustomerNoMoney(customerReccord *customer)
{
    if (customer->accountBalance <= 0)
    {
        customer->isAccountOverdrawn = true;
    }
    else
    {
        customer->isAccountOverdrawn = false;
    }
}