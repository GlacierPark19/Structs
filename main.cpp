#include <iostream>
#include <vector>

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

    cout << "Customer Name: " << customer1->customerName << endl;
}