#include <iostream>

void solve(int n)
{
    if (n <= 100)
    {
        if (n == 2)
        {
            std::cout << "NO";
        }
        else
        {
            if (n % 2 == 0)
            {
                std::cout << "YES";
            }
            else
            {
                std::cout << "NO";
            }
        }
    }
}

int main()
{
    int n;
    std::cin >> n;
    solve(n);
}