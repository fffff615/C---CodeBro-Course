#include <iostream>

int main() {
    double temperature;
    char originalUnit;
    char targetUnit;
    double convertedTemperature;

    std::cout << "Enter temperature value: ";
    std::cin >> temperature;
    std::cout << "Enter original unit (C for Celsius, F for Fahrenheit, K for Kelvin): ";
    std::cin >> originalUnit;
    std::cout << "Enter target unit (C for Celsius, F for Fahrenheit, K for Kelvin): ";
    std::cin >> targetUnit;

    if (originalUnit == targetUnit) {
        convertedTemperature = temperature;
    } else if (originalUnit == 'C' && targetUnit == 'F' || originalUnit == 'c' && targetUnit == 'f') {
        convertedTemperature = (temperature * 9.0 / 5.0) + 32.0;
    } else if (originalUnit == 'C' && targetUnit == 'K' || originalUnit == 'c' && targetUnit == 'k') {
        convertedTemperature = temperature + 273.15;
    } else if (originalUnit == 'F' && targetUnit == 'C' || originalUnit == 'f' && targetUnit == 'c') {
        convertedTemperature = (temperature - 32.0) * 5.0 / 9.0;
    } else if (originalUnit == 'F' && targetUnit == 'K' || originalUnit == 'f' && targetUnit == 'k') {
        convertedTemperature = (temperature - 32.0) * 5.0 / 9.0 + 273.15;
    } else if (originalUnit == 'K' && targetUnit == 'C' || originalUnit == 'k' && targetUnit == 'c') {
        convertedTemperature = temperature - 273.15;
    } else if (originalUnit == 'K' && targetUnit == 'F' || originalUnit == 'k' && targetUnit == 'f') {
        convertedTemperature = (temperature - 273.15) * 9.0 / 5.0 + 32.0;
    } else {
        std::cout << "Invalid unit entered!" << std::endl;
    }
    std::cout << "Converted temperature: " << convertedTemperature << " " << targetUnit << std::endl;

    return 0;
}