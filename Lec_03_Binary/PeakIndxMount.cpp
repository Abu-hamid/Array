#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
      int s=0;
      int e =arr.size()-1;
      
      int mid =s+ (e-s) /2;
      while(s<e){
        
        if(arr[mid]<arr[mid+1])
          
          s =mid+1;
        
        else{
          
          e =mid;//if we return mid-1 then lower elemnt of other side is will give wich is wrong;
        }
        mid =s+(e-s)/2;
      }
      return s;
    }
};







int main(){

return 0;
}