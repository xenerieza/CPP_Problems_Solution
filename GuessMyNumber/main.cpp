#include <iostream>
#include <stdlib.h>
#include <ctime>

int main()
{
    std::srand(std::time(nullptr)); //use current time as seed for random generator.

    int guessNumber, secretNumber;
    secretNumber = std::rand() % 10 ;

    std::cout << "Welcome to the Guess my number game!" << std::endl;
    std::cout << "Please enter a any number between (0-9): ";
    std::cin >> guessNumber;
    do{
        if(guessNumber >= 0 && guessNumber <=9)
        {
            if(guessNumber < secretNumber)
            {
                std::cout << "Your variable is lower than my variable! Enter a new value: ";
                std::cin >> guessNumber;
            }

            else if(guessNumber > secretNumber)
            {
                std::cout << "Your variable higher than my variable! Enter a new value: ";
                std::cin >> guessNumber;
            }
        }

        else
        {
            std::cout << "Please enter a any number between 0-9" << std::endl;
            std::cin >> guessNumber;
        }

    }while(secretNumber != guessNumber);

    std::cout << "Congrats! You are find my secretnumber!. My secretnumber is: " << secretNumber <<std::endl;

    return 0;
}
