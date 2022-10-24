#include<iostream>
#include<vector>
using namespace std;


bool BinarySearch(vector<vector<int>>&Matrix ,int target){


    int row =Matrix.size();
    int col=Matrix[0].size();

    int rowIndex =0;

    int colIndex =col-1;

    while(rowIndex<row && colIndex>=0){

        int element =Matrix[rowIndex][colIndex];

        if(element==target){
            return 1;
        }

        else if(element>target){

            colIndex--;
        }

        else{
            rowIndex++;
        }
    }
    return 0;
}



int main(){

return 0;
}