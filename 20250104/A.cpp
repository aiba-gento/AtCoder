#include <stdio.h>
#include <iostream>

int main(int argc, char const *argv[])
{
    int a;
    int b;
    std::cin >> a >> b;
    int ans = (a + b) * (a + b);
    std::cout << ans << std::endl;
    return 0;
}
