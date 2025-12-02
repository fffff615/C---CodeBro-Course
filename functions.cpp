#include <iostream>

std::string connectNames(std::string firstName, std::string lastName);

int main() {
    std::string firstName = "Yahya";
    std::string lastName = "Saleh";
    std::string fullName = connectNames(firstName, lastName);
    std::cout << "Full Name: " << fullName << std::endl;
}

std::string connectNames(std::string firstName, std::string lastName) {
    return firstName + " " + lastName;
}