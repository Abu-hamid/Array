#include <iostream>
using namespace std;

int getPivot(int arr[], int n)
{

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {

        if (arr[mid] >= arr[0])//in this pivot eleement is largest elem. in an array; for smallest pivot (arr[mid]<=arr[0]);
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return e;// return e both are same ponit index;
}

int main()
{
    int arr[5] = {3,8,10,17,1,};
    cout << "Pivot is " << getPivot(arr, 5) << endl;
}















