#include <iostream>

/*Codeforces Problem 158A -- Next Round
! "Contestant who earns a score equal to or greater than the k-th place finisher's score will advance to the next round, as long as the contestant earns a positive score..."
— an excerpt from contest rules.

* A total of n participants took part in the contest (n ≥ k), and you already know their scores. Calculate how many participants will advance to the next round.

! Input
* The first line of the input contains two integers n and k (1 ≤ k ≤ n ≤ 50) separated by a single space.

* The second line contains n space-separated integers a1, a2, ..., an (0 ≤ ai ≤ 100), where ai is the score earned by the participant who got the i-th place.
* The given sequence is non-increasing (that is, for all i from 1 to n - 1 the following condition is fulfilled: ai ≥ ai + 1).

! Output
* Output the number of participants who advance to the next round.

* Examples1
Input:
    8 5
    10 9 8 7 7 7 5 5
Output:
    6

* Examples 2
Input
    4 2
    0 0 0 0
Output:
    0


*Points to consider when solving this problem:
* (1 ≤ k ≤ n ≤ 50)
1- k must be greater than equal to 1 and less than or equal to n.
2- n must be less than or equal to 50 and greater than or equal to k.

3- The defined array must have n dimensions.
* When you define this as int arr[n], you will get an error.
* The error you are getting is because the array size must be fixed(constant value), which is a feature of standart arrays.
* Therefore, instead of defining the array in the stack, we need to define it in the heap and release it to memory when the operation is completed.
* This way we can adjust the array size dynamically.
*/

int main()
{
    int n, k, count = 0;
    std::cin >> n >> k;

    if ((n >= 1 && n <= 50) && (k >= 1 && k <= n))
    {
        int* score = new int[n];
        for (int i = 0; i < n; ++i)
        {
            std::cin >> score[i];
        }
        int k_score = score[k - 1];
        for (int i = 0; i < n; ++i)
        {
            if (score[i] > 0 && score[i] >= k_score)
            {
                ++count;
            }
        }
        delete[] score;
    }
    else
    {
        return 1;
    }
    std::cout << count << std::endl;
    return 0;
}
