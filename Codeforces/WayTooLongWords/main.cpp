#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i)
    {
        std::string word;
        std::cin >> word;
        if (word.size() > 10)
        {
            std::cout << word[0] << word.size() - 2 << word[word.size() - 1] << std::endl;
        }
        else
        {
            std::cout << word << std::endl;
        }
    }

    return 0;
}