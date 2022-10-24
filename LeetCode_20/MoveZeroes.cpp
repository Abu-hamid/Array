#include<iostream>
#include<vector>

using namespace std;

void MoveZeros(vector<int>&nums){

    //shift all none zero value to the left side;
    
    int nonezero=0;

    for(int j=0;j<nums.size();j++){

        if(nums[j]!=0){

            swap(nums[j] ,nums[nonezero]);
            nonezero++;
        }
    }
}
int main(){

return 0;
}