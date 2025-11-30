#include <iostream>

int main(){
    double num1;
    double num2;
    double sum;
    char operation;

    std::cout << " " << std::endl;
    std::cout << "*************************Calculator Program*************************" << std::endl;
    std::cout << " " << std::endl;

    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> operation;

    std::cout << " " << std::endl;
    std::cout << "********************************************************************" << std::endl;
    std::cout << " " << std::endl;

    switch(operation){
        case '+':
            sum = num1 + num2;
            std::cout << "Result: " << sum << std::endl;
            break;
        case '-':
            sum = num1 - num2;
            std::cout << "Result: " << sum << std::endl;
            break;
        case '*':
            sum = num1 * num2;
            std::cout << "Result: " << sum << std::endl;
            break;
        case '/':
            if(num2 != 0){
                sum = num1 / num2;
                std::cout << "Result: " << sum << std::endl;
            } else {
                std::cout << "Error: Division by zero!" << std::endl;
            }
            break;
        default:
            std::cout << "Invalid operation!" << std::endl;
    }
    
}