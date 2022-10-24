#include <iostream>
#include <vector>
#include <string>
using namespace std;

class solution
{

public:
    int compress(vector<char> &chars)
    {

        int i = 0;
        int ansIndex = 0;

        int n = chars.size();

        while (i < n)
        {

            int j = i + 1;

            while (j < n && chars[i] == chars[j])
            {

                j++;
            }
            //    yahn do case me ayega
            // jb vctor pura traverse ho jaye;
            // ya fir koi nya char mil jaye;

            // old char store krle;
            chars[ansIndex++] = chars[i];

            int count = j - i;

            if (count > 1)
            {
                // converting counting into single digit and save into answer

                string cnt = to_string(count);

                for (auto ch : cnt)
                {

                    chars[ansIndex++] = ch;
                }
            }
            // new char moving;
            i = j;
        }
        return ansIndex;
    }
};
int main()
{

    return 0;
}
