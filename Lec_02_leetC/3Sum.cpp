#include <iostream>
#include <algorithm>
#include <vector> 
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    int target;
    cin >> target;
   vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }
    bool found = false;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {

        int low = i + 1;
        int high = n - 1;

        while (low < high)
        {

            int current = arr[i] + arr[low] + arr[high];

            if (current == target)
                found = true;

            if (current < target)
            {
                low++;
            }
            else
            {
                high--;
            }
        }
    }
    if (found)
        cout << "target found" << endl;

    else
    {
        cout << "Not found" << endl;
    }

    return 0;
}