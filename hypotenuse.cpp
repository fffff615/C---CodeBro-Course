#include <iostream>
#include <cmath>

int main() {
    double a;
    double b;
    double c;

    std::cout << "Enter length of side a: ";
    std::cin >> a;

    std::cout << "Enter length of side b: ";
    std::cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);
    std::cout << "The length of the hypotenuse c is: " << c << std::endl;

    return 0;
}