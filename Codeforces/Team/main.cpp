#include <iostream>

/*Codeforces Problem --> Team
* One day three best friends Petya, Vasya and Tonya decided to form a team and take part in programming contests. 
* Participants are usually offered several problems during programming contests.
* Long before the start the friends decided that they will implement a problem if at least two of them are sure about the solution. 
* Otherwise, the friends won't write the problem's solution.

*This contest offers n problems to the participants. For each problem we know, which friend is sure about the solution. 
* Help the friends find the number of problems for which they will write a solution.

Input:
The first input line contains a single integer n (1 ≤ n ≤ 1000) — the number of problems in the contest. 
Then n lines contain three integers each, each integer is either 0 or 1. 
If the first number in the line equals 1, then Petya is sure about the problem's solution, otherwise he isn't sure. 
The second number shows Vasya's view on the solution, the third number shows Tonya's view. The numbers on the lines are separated by spaces.

Output
Print a single integer — the number of problems the friends will implement on the contest.

Examples1:
Input:
3
1 1 0
1 1 1
1 0 0
Output:
2

Examples2:
Input:
2
1 0 0
0 1 1
Output:
1
*/

int main() {
    int n;
    int count1 = 0;
    std::cin >> n;

    if (n >= 1 && n <= 1000)
    {
        for (int i = 0; i < n; ++i)
        {
            int Petya, Vasya, Tonya;
            std::cin >> Petya >> Vasya >> Tonya;
            if ((Petya == 0 || Petya == 1) && (Vasya == 0 || Vasya == 1) && (Tonya == 0 || Tonya == 1))
            {
                int count2 = Petya + Vasya + Tonya;

                if (count2 >= 2)
                {
                    ++count1;
                }
            }
        }
    }
    std::cout << count1 << std::endl;
}
