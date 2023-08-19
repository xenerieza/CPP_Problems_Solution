#include <iostream>   

int main()  
{
    int num, flag = 0;

    std::cout << "Enter any integer numbers to check prime: ";
    std::cin >> num;

    for(int i=2; i <= num / 2; ++i)
    {
        if ( num % i == 0)
        {
            std::cout << "The number " <<num << " is not prime.";
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        std::cout << "The number " <<num << " is prime.";
    }

    return 0;
}  