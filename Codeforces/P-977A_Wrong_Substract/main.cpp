#include <iostream>

void solve(int n, int k)
{
    for (int i = 0; i < k; ++i)
    {
        if (n % 10 == 0)
        {
            n /= 10;
        }
        else
        {
            n--;
        }
    }

    std::cout << n;
}

int main()
{
    int a, b;
    std::cin >> a >> b;
    solve(a, b);
}

