#include <iostream>

/*
! Multiples of 3 or 5 Problems.

* If we list all the natural numbers below 10 that are multiplies of 3 or 5, we get 3,5,6 and 9.
* These sum of multiplies is 23.

! Find the sum of all the multiplies of 3 or 5 below 1000.
*/

int main() 
{
    int sum = 0;

    for(int i=0; i < 1000; ++i)
    {
        if(i % 3 == 0 | i % 5 == 0)
        {
            sum += i;
        }

    }

    std::cout << "Sum: " << sum << std::endl;
}
