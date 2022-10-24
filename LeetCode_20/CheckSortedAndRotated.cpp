#include<iostream>
#include<vector>
using namespace std;

bool check(vector<int>&num){

    int count =0;

    int n =num.size();

    for(int i=1;i<n ;i++){

        if(num[i-1]>num[i])

        count++;
    }

    if(num[n-1]>num[0])
    count++;

    return count<=1;
}


int main(){

return 0;
}