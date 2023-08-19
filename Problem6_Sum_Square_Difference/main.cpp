#include <iostream>

/*
! Sum Square Difference Problems.
* The sum of the squares of the first ten natural numbers is:
?       1^2 + 2^2 + 3^2 + ... 10^2 = 385.

* The square of the sum of the first ten natural numbers is:
?       (1 + 2 + 3 + ... 10)^2 = 3025.

* Hence the difference between sum of the squares of the first ten natural numbers and
* the square of the sum is 3025 - 2640.

! Find the between the sum of the squares of the first one hundred natural numbers and the square of sum.
*/

int main() 
{
    int sum1 = 0, sum2=0;
    int sqrSum1;
    int difference;

    for(int i=1; i <= 100; ++i)
    {
        sum1 += i;
    }

    sqrSum1 = sum1 * sum1;

    for(int i=1; i<=100; ++i)
    {
        sum2 += i*i;
    }

    difference = sqrSum1 - sum2;

    std::cout <<"(1 + 2 + ... + 100)^2 =  " << sqrSum1 << std::endl;
    std::cout <<"(1^2 + 2^2 + ... + 100^2) =  " << sum2 << std::endl;
    std::cout << "Difference of two sum:  " << difference << std::endl;
}
