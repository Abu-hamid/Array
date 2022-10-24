#include <iostream>
using namespace std;

class Solution
{
public:
    string removeDuplicates(string s)
    {
        int j = 0;
        int i = 0;

        while (i + 1 < s.length())
        {
            if (s[i] == s[i + 1])
            {
                s.erase(i, 2);
                if (i - 1 < 0)
                {
                    i = 0;
                }
                else
                {
                    i--;
                }
            }
            else
            {
                i++;
            }
        }
        return s;
    }
};
int main()
{

    return 0;
}