#include <iostream>

void PrintIntroduction(int Difficulty) 
{
    std::cout << "\nYou are a wizard, breaking into a level " << Difficulty << " Severus Snape's chamber with potion ingredient chamber. Unfortunately, professor Mcgonagall protected shelves with anctient chants\n";
    std::cout << "You need to solve math sequence to continue...\n\n";
}

bool PlayGame(int Difficulty) 
{
    PrintIntroduction(Difficulty);

    int CodeA = 4;
    int CodeB = 6;
    int CodeC = 9;

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct  = CodeA * CodeB * CodeC;

    std::cout << std::endl;
    std::cout << "~ There are 3 numbers in math sequence" << std::endl;
    std::cout << "~ The numbers sum up into: " << CodeSum << std::endl;
    std::cout << "~ The numbers multiply to give: "<< CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;
    std::cout << std::endl;
    std::cin >> GuessA >> GuessB >> GuessC;
    std::cout << std::endl;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct) {
        std::cout << "You win!";
        return true;
    } else {
        std::cout << "Sorry, but u've lost :(";
        return false;
    }
}

int main() 
{
    int LevelDiffictulty = 1;
    while (true)
    {
        bool bLevelComplete = PlayGame();
        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplete) {
            ++LevelDiffictulty;
        }
    }
    
    return 0;
}