#include<iostream>
#include<vector>
using namespace std;
#include "2DArrayFunction.h"

int main(){
     system("cls");
     // vector<vector<int>> arr = {{1,2},{4,5}};
     // vector<int> arr2 = {1,2,3,7,};
     // transpose(arr);
     // shiftGrid(arr,1);
     // construct2DArray(arr2,2,2);
     // matrixReshape(arr,1,4);
     int n=10;
     int arr[n] = {-5 ,-2, 5 ,2 ,4 ,7, 1, 8, 0 ,-8};
     rearrange(arr,n);
return 0;
}