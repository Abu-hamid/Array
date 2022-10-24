#include <iostream>
using namespace std;
class solution
{
private:
public:
    bool checkEqual(int a[26], int b[26])
    {

        for (int i = 0; i < 26; i++)
        {

            if (a[i] != b[i])
                return 0;
        }
        return 1;
    }

    bool CheckInclusion(string s1, string s2)
    {

        // charcter count array;
        int count1[26] = {0};

        for (int i = 0; i < s1.length(); i++)
        {

            int index = s1[i] - 'a';

            count1[index]++;
        }

        // traverse s2 string in window of size s1 lnth and campare;

        int i = 0;
        int windowSize = s1.length();
        int count2[26] = {0};

        // running for first window;

        while (i < windowSize && i < s2.length())
        {

            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }
        if (checkEqual(count1, count2))
            return 1;

        // otherwise aage badh jao;

        while (i < s2.length())
        {

            char newChar = s2[i];
            int index = newChar - 'a';
            count2[index]++;

            char oldChar = s2[i - windowSize];
            int index = oldChar - 'a';
            count2[index]--;

            i++;
            if (checkEqual(count1, count2))
                return 1;
        }
        return 0;
    }
};
int main()
{

    return 0;
}