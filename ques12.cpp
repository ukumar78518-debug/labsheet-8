#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance = 0;

public:
    void deposit(double amount) {
        if(amount > 0)
            balance += amount;
        else
            cout << "Invalid deposit\n";
    }

    void withdraw(double amount) {
        if(amount > 0 && amount <= balance)
            balance -= amount;
        else
            cout << "Invalid withdrawal\n";
    }

    void display() {
        cout << "Balance: " << balance;
    }
};

int main() {
    BankAccount b;

    b.deposit(5000);
    b.withdraw(2000);
    b.display();

    return 0;
}