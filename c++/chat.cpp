#include <iostream>
#include <string>

class BankAccount {
private:
    std::string ownerName;
    double balance;

public:
    // Constructor
    BankAccount(std::string name, double initialBalance) {
        ownerName = name;
        balance = initialBalance;
    }

    // Member function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited $" << amount << ". New balance: $" << balance << std::endl;
        } else {
            std::cout << "Invalid deposit amount. Amount must be greater than 0.\n";
        }
    }

    // Member function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawn $" << amount << ". New balance: $" << balance << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount or insufficient funds.\n";
        }
    }

    // Member function to display account information
    void displayInfo() {
        std::cout << "Account Information for " << ownerName << ": Balance = $" << balance << std::endl;
    }
};

int main() {
    // Create a BankAccount object
    BankAccount myAccount("John Doe", 1000.0);

    // Perform some transactions
    myAccount.displayInfo();
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);
    myAccount.displayInfo();

    return 0;
}

