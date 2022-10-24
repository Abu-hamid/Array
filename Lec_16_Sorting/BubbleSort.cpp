#include<iostream>
#include<vector>
using namespace std;

// in bubble sort we place the i th largest element of array place in the right place  of the ith row/round; 

// in this case time complexity in best case is O(n^2);

int bubbleSort(vector<int>&arr ,int n){

// for taking the round value 1,2,3,4...n-1;

    for(int i=1;i<n;i++){
        
        for(int j=0;j<n-i;j++){//up to (n-i) because every itration length of array will be decrease due remain are sorted;

            if(arr[j]>arr[j+1]){
                 swap(arr[j] ,arr[j+1]);
            }
        }
    }
}

/*
        // in this case time complexity in best case is O(n);


int bubbleSort(vector<int>&arr ,int n){

// for taking the round value 1,2,3,4...n-1;

    
    for(int i=1;i<n;i++){
        
        bool swapped =false;

        for(int j=0;j<n-i;j++){//up to (n-i) because every itration length of array will be decrease due remain are sorted;

            if(arr[j]>arr[j+1]){
                 swap(arr[j] ,arr[j+1]);

                 swapped =true;
            }
        }

        if(swapped ==false){
            //already sorted array ;
            break;
        }
    }
}
*/
int main(){

return 0;
}