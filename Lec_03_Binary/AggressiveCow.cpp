/* Given an array of length ‘N’, where each element denotes the position of a stall. Now you have ‘N’ stalls and an integer ‘K’ which denotes the number of cows that are aggressive. To prevent the cows from hurting each other, you need to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. Return the largest minimum distance.
 */
#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;

class solve
{
public:
    bool isPossible(vector<int> &stalls, int k, int mid, int n)
    {

        int cowCount = 1;
        int lastPos = stalls[0];

        for (int i = 0; i < n; i++)
        {

            if (stalls[i] - lastPos >= mid)
            {
                cowCount++;
                if (cowCount == k)
                {
                    return true;
                }
                lastPos = stalls[i];
            }
        }
        return false;
    }

    int aggressiveCows(vector<int> &stalls, int k)
    {
        sort(stalls.begin(), stalls.end());
        int s = 0;
        int n = stalls.size();
        int e = stalls[n - 1];
        int ans = -1;
        int mid = s + (e - s) / 2;

        while (s <= e)
        {
            if (isPossible(stalls, k, mid, n))
            {
                ans = mid;
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
        return ans;
    }
};