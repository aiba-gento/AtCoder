#include <iostream>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x;
    std::cin >> x;

    int sum = 0;
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (i * j != x)
                sum += i * j;
        }
    }
    std::cout << sum << std::endl;
    return 0;
}
