#include <iostream>
#include <string> // make sure you include this
#include <iomanip>

void showBalance(double balance);
void deposit(double &balance);
void withdraw(double &balance);

int main() {
    double balance = 0; // Keep balance outside the loop

    do {
        std::string action;
        std::cout << "Welcome to your bank account\n";
        std::cout << "What would you like to do? (Deposit/Withdraw/Balance): ";
        std::getline(std::cin, action); // Use getline to read the full line

        if (action == "Balance") {
            showBalance(balance);
        }
        else if (action == "Withdraw") {
            withdraw(balance);
        } 
        else if (action == "Deposit") {
            deposit(balance);
        }
        else {
            std::cout << "Invalid action! Try again.\n";
        }
    } while (true);
}

void showBalance(double balance) {
    std::cout << std::setprecision(2) << std::fixed << balance << " is your current balance\n";
}

void withdraw(double &balance){
    double withdrawAmount;
    std::cout << "How much money do you want to withdraw?: ";
    std::cin >> withdrawAmount;

    if  (withdrawAmount > balance) {
        std::cout << "Insufficient funds in account\n";
    }
    else {
        balance -= withdrawAmount;
        std::cout << "-" << std::setprecision(2) << std::fixed << withdrawAmount << " successfully withdrawn from your account\n";
        std::cout << std::setprecision(2) << std::fixed << balance << " is your updated balance\n\n";
    }
}

void deposit(double &balance) {
    double depositAmount;
    std::cout << "How much do you want to deposit?: ";
    std::cin >> depositAmount;

    balance += depositAmount;
    std::cout << "You have deposited " << std::setprecision(2) << std::fixed << depositAmount << " into your account\n";
    std::cout << std::setprecision(2) << std::fixed << balance << " is your updated balance\n\n";
}
