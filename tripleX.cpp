#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty) 
{
    std::cout << "\nYou are a wizard, breaking into a level " << Difficulty << " Severus Snape's chamber with potion ingredient chamber. Unfortunately, professor Mcgonagall protected shelves with anctient chants\n";
    std::cout << "You need to solve math sequence to continue...\n\n";
}

bool PlayGame(int Difficulty) 
{
    PrintIntroduction(Difficulty);

    int CodeA = rand() % Difficulty + Difficulty;
    int CodeB = rand() % Difficulty + Difficulty;
    int CodeC = rand() % Difficulty + Difficulty;

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
        std::cout << "Congratz! You solved the puzzle!\n";
        return true;
    } else {
        std::cout << "Sorry, but u've lost :( Try again...\n";
        return false;
    }
}

int main() 
{
    // set seed for rand
    srand(time(NULL));

    int LevelDiffictulty = 1;
    const int MaxDifficulty = 5;

    while (LevelDiffictulty <= MaxDifficulty)
    {
        bool bLevelComplete = PlayGame(LevelDiffictulty);
        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplete) {
            ++LevelDiffictulty;
        }
    }
    
    std::cout << "\n ~~~ Perfect, seem it's got unlocked! Now grab all the stuff and let's get outta there!";
    return 0;
}