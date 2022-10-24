#include<iostream>
#include<vector>

using namespace std;

void selectionSort(vector<int>&arr , int n){

    for(int i=0;i<n-1;i++){

        int minIndex =i;// assume our first element is the minimm lement;

        for(int j=i+1;j<n;j++){

            if(arr[j]<arr[minIndex])
                minIndex=j;//update the minindex by min element; in entire arr;
            
        }
        swap(arr[i],arr[minIndex]);
    }
}
int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }   

    // selectionSort(arr , n);
   for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}

return 0;
}