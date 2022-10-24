#include<iostream>
#include<vector>
using namespace std;

void RotateByK(vector<int>&nums ,int k){


        vector<int> temp(nums.size());

        for(int i=0;i<nums.size();i++){

                // temparr[(i+k)%n] = arr[i]; logic to rotate the array;s

            temp[(i+k)%nums.size()] = nums[i];// we use the temp vector because no value will be over write in the nums vector;
        }

        // copy the value into nums according to question;

        nums =temp;

}
int main(){

return 0;
}