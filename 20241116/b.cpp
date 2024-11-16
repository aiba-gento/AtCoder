#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    vector<int> num;
    int count = 0;
    bool flag = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '|')
        {
            flag = !flag;
        }
        if (s[i] == '-' && flag)
        {
            num[count]++;
        }
    }

    return 0;
}
