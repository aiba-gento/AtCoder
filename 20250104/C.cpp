#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    unsigned long long l;
    unsigned long long r;
    unsigned long long count = 0;
    cin >> l >> r;
    for (unsigned long long i = l; i <= r; i++)
    {
        unsigned long long all = i;
        unsigned long long first_num = 0;
        unsigned long long num = 0;
        bool start = false;
        bool ok = true;
        for (int j = 18; j >= 0; j--)
        {
            num = all / (unsigned long long)pow(10, j);
            if (num != 0 && !start)
            {
                first_num = num;
                start = true;
            }
            else if (start)
            {
                if (first_num <= num)
                {
                    ok = false;
                }
            }
            all = all % (unsigned long long)pow(10, j);
        }
        if (ok)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}