#include <iostream>
#include <ctime>

int main() {

    std::cout << "\n";
    std::cout << "********************************RANDOM EVENT****************************************";
    std::cout << "\n";

    srand(time(0));

    int eventType = (rand() % 4) + 1; 

    if (eventType == 1)
    {
        std::cout << "Random Event: Treasure Found!" << std::endl;
    }
    else if (eventType == 2)
    {
        std::cout << "Random Event: Monster Encountered!" << std::endl;
    }
    else if (eventType == 3)
    {
        std::cout << "Random Event: Raining Carrots!" << std::endl;
    }
    else if (eventType == 4)
    {
        std::cout << "Random Event: The 2026 Meme Reset!" << std::endl;
    }
    else if (eventType == 5)
    {
        std::cout << "Random Event: 67!" << std::endl;
    }
    else
    {
        std::cout << "ERROR! (i am actually serious look at ur code)" << std::endl;
    }

    std::cout << "\n";
    std::cout << "************************************************************************************";
    std::cout << "\n";

    return 0;
}