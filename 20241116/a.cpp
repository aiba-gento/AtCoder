#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::string n;
    int count_1 = 0;
    int count_2 = 0;
    int count_3 = 0;
    std::cin >> n;
    for (int i = 0; i < n.size(); i++)
    {
        if (n[i] == '1')
        {
            count_1++;
        }
        else if (n[i] == '2')
        {
            count_2++;
        }
        else if (n[i] == '3')
        {
            count_3++;
        }
    }
    if (count_1 == 1 && count_2 == 2 && count_3 == 3)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }
    return 0;
}
