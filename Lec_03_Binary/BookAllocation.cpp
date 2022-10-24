
#include<vector>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;
    //cout << "checking for mid "<< mid <<endl;
    
    for(int i = 0; i<n; i++) {
        if(pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if(studentCount > m || arr[i] > mid ) {
            return false;
        }
            pageSum = arr[i];//this is use for the new student which is allocated after the first is greater than mid value;
        }
        if(studentCount > m) {
            return false;
        }
        //cout << " for i " << i << " Student "<< studentCount << " pageSum " << pageSum << endl;
    }
    return true;
}

int allocateBooks(vector<int> arr, int n, int m) {
    int s = 0;
    int sum = 0;
    
    for(int i = 0; i<n; i++) { //sum find because it is esy to make contiguous range for use of binary search;
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;
    
    while(s<=e)
    {
        if(isPossible(arr,n,m,mid)) {
            //cout<<" Mid returned TRUE" << endl;
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main(){

return 0;
}









/*
Painter’s Partition Problem
// You are given boards in the form of array elements and 2 painetrs are given you have to assign these painters to paint these boards such that overall time is minimum here we have to find minimum time taken to pain the board by two cows
#include <iostream>

using namespace std;

bool ifPossible(int arr[], int n, int m, int mid)
{
    int painter = 1;
    int boardsPainted = 0;
    for (int i = 0; i < n; i++)
    {
        if (boardsPainted + arr[i] <= mid)
        {
            boardsPainted += arr[i];
        }
        else
        {
            painter++;
            if (painter > m || arr[i] > mid)
            {
                return false;
            }
            else
            {
                boardsPainted = arr[i];
            }
        }
    }
    return true;
}

int painter(int arr[], int n, int m)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int painted = -1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (ifPossible(arr, n, m, mid))
        {
            painted = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return painted;
}

int main()
{
    int boards[4] = {5, 5, 5, 5};
    int paintersNum = 2;
    cout << painter(boards, 4, paintersNum);
    return 0;
}


*/