#include<iostream>
#include<vector>
using namespace std;


int InsertionSort(vector<int>&arr ,int n){

        // its all for round ;
    for(int i=1;i<n;i++){
 
        int temp =arr[i];

        int j=i-1;//we traverse the arry value from reverse order;

        for(;j>=0;j--){

            if(arr[j+1]>arr[j]){

                arr[j+1] =arr[j];//shift the indx and copy the value is less;
            }
            else {
                break;
            }
        }
            //copy temp value
            arr[j+1] =temp;//this is if during the campare the value is out of range of array;
    }
}
int main(){

return 0;
}

