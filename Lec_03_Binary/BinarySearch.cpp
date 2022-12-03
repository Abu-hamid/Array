#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

    //  we can do this also
    // mid = (start+end)/2; but it over flow due to below case;

    int mid = start + (end - start) / 2; // this is due to no over flow in case of start=(2^32-1) and end =(2^32-1); if we add then integer is get out of range ;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }

        // go to right wala part
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        { // key < arr[mid]
            end = mid - 1;
        }

        //  we can do this also
        // mid = (start+end)/2; but it over flow due to above case;

        mid = start + (end - start) / 2; // update the value of mid;
    }

    return -1;
}

int main()
{

    int even[6] = {25, 30, 35, 40, 45, 50};
    // int odd[5] = {3, 8, 11, 14, 16};

    int evenIndex = binarySearch(even, 6, 45);

    cout << " Index of 45 is " << evenIndex << endl;

    // int oddIndex = binarySearch(odd, 5, 14);

    // cout << " Index of 14 is " << oddIndex << endl;

    return 0;
}
