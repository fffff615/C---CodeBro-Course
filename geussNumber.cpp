#include <iostream>
#include <ctime>

int main() {
    std::srand(time(0));
    int randomNumber = (std::rand() % 100) + 1;
    int userGuess = randomNumber;
    int attempts = 0;

    std::cout << "Welcome to the Guess the Number Game!" << std::endl;
    std::cout << "I have selected a number between 1 and 100. Can you guess it?" << std::endl;

    do{
       std::cout << "Enter your guess: ";
       std::cin >> userGuess;
       attempts++;
         if(userGuess < randomNumber){
              std::cout << "Too low! Try again." << std::endl;
         } else if(userGuess > randomNumber){
              std::cout << "Too high! Try again." << std::endl;
         }
    } while (userGuess != randomNumber);

    std::cout << "Congratulations! You've guessed the number " << randomNumber << " in " << attempts << " attempts." << std::endl;
    return 0;
}