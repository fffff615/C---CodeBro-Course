#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin >> std::ws, name);

    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    int year;
    std::cout << "Enter the current year: ";
    std::cin >> year;
    int birthYear = year - age

    std::cout << "Hello, " << name << "!" << std::endl;
    std::cout << "You are " << age << " years old." << std::endl;
    std::cout << "You were born in " << birthYear << "." << std::endl;

    return 0;
}