#include <iostream>

void bakePizza();
void bakePizza(std::string topping);
void bakePizza(std::string topping1, std::string topping2);

int main() {
    int numberOfToppings;
    std::string topping1;
    std::string topping2;
    std::string topping;

    std::cout << "Welcome to the Pizza Shop!\n";
    std::cout << "Baking different types of pizzas:\n";
    std::cout << "How many toppings would you like on your pizza?\n";
    std::cin >> numberOfToppings;
    if (numberOfToppings == 2) {
        std::cout << "Enter topping 1:\n";
        std::cin >> topping1;
        std::cout << "Enter topping 2:\n";
        std::cin >> topping2;
        bakePizza(topping1, topping2);
    } else if (numberOfToppings == 1) {
        std::cout << "Enter your topping:\n";
        std::cin >> topping;
        bakePizza(topping);
    } else if (numberOfToppings == 0) {
        bakePizza();
    } else {
        std::cout << "Sorry, we can only handle up to 2 toppings at the moment.\n";
    }
    
    return 0;
}

void bakePizza() {
    std::cout << "Here is your plain pizza! \n";
}

void bakePizza(std::string topping) {
    std::cout << "Here is your pizza with " << topping << "!\n";
}

void bakePizza(std::string topping1, std::string topping2) {
    std::cout << "Here is your pizza with " << topping1 << " and " << topping2 << "!\n";
}