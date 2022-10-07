#include <iostream>
#include <sys/time.h>
#include <vector>
#include <algorithm>
using namespace std;
// #include "function.h"
#include "function2.h"

int main()
{
     // FIND DUPLICATE ----: (function : 5)
     // int arr[] = {1,2,3,5,4,5};
     // int ans=0;
     // int size = sizeof(arr)/sizeof(arr[0]);
     // // int dup = findDuplicate(arr,size);
     // int dup = fincDuplicate_2(arr,size);
     // cout<<"The duplicate elememt is : "<<dup<<endl;

     // FIND ELEMENT OCCURING TWICE ----: (function : 6)

     // PAIR SUM ----: (function : 7)
     // int arr[] = {2,-3,3,3,-2};
     // int size = sizeof(arr)/sizeof(arr[0]);
     // int sum;
     // cout<<"Enter the sum you want to find"<<endl;
     // cin>>sum;
     // PairSum(arr,size,sum);

     // SORT 0 AND 1 IN AN ARRAY ----: (function : 8)
     // int arr[] = {1,1,0,0,0,1,1};
     // int arr[] = {0,2,2,1,0,1,1,0,2};
     // int size = sizeof(arr)/sizeof(arr[0]);
     // sort_zero_and_one(arr,size);
     // sort_zero_and_one_two_pointer(arr,size);

     // double startTime ,endTime;
     // startTime = getTimeinMicroSeconds();
     // for(int i = 0 ; i < 5 ; i++){
     //      cout<<i<<endl;
     // }
     // endTime = getTimeinMicroSeconds();
     // cout<<"Time is : "<<endTime - startTime;

     //  AMAN DATTER WAAL QUESTIONS //
     //----: EASY :----//
     // min and max element in an array ( function : 1 ) //

     // int arr[] = {1,3,6,9,3,2,-4,-9,11};
     // int size = sizeof(arr)/sizeof(arr[0]);
     // double startTime, endTime;
     // startTime = getTimeinMicroSeconds();
     // findMinMax(arr,size);
     // endTime = getTimeinMicroSeconds();
     // cout << "Time taken : " << endTime - startTime<<endl;

     // reversing the array ( function : 2 ) //
     //  int arr[] = {1,3,6,9,3,2,-4,-9,11};
     // int size = sizeof(arr)/sizeof(arr[0]);
     // Reversing(arr,size);
     // printArray(arr, size);

     // return true is any value appear atleast twice (function : 3) //

     // int arr[] = {1,3,6,9,3,2,-4,-9,11};
     // int arr[] = {0,4,5,0,3,6};
     // int size = sizeof(arr)/sizeof(arr[0]);
     // bool c = AppearTwice(arr,size);
     // cout<<c<<endl;

     // find continous subarrays having maximum value ( function : 4 )
     // int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
     // int size = sizeof(arr)/sizeof(arr[0]);
     // int x = ContinousSubarray(arr,size);
     // cout<<x;

     // leet code : Aman Excel sheet - 19 :----
     // function  : 5
     // int arr[] = {7,1,5,3,6,4};
     // int size = sizeof(arr)/sizeof(arr[0]);
     // cout<<"The maximum profit is : "<<MaxProfit(arr,size);

     // int arr[] = {7,1,5,3,6,4};
     // int size = sizeof(arr)/sizeof(arr[0]);
     // cout<<MaxProfit(arr,size);
     // display(arr, size);

     // Aman Excel sheet - 20 :---- (funciton : 6)
     // vector<int> vec = {3,1, 2 ,5 ,4,6,7,8,4,10,11,12,13};
     // int missing , repeat;
     // repeatedNum(vec, &missing , &repeat);
     // cout<<"Repeated num  : "<<repeat<<" Missing num : "<<missing<<endl;

     // Aman Excel sheet - 21 :---- (funciton : 7)
     //  vector<int> vec = {3,2,3,1,2,4,5,5,6};
     //  int k;
     //  cout<<"Enter the value of k "<<endl;
     //  cin>>k;
     //  cout<<"The k'th largest element is : "<<findKthLargest(vec,k);

     // Aman Excel sheet - 22 :---- (funciton : 8)
     // vector<int> vec = {0,1,0,2,1,0,1,3,2,1,2,1};
     // cout<<"The amount of water hold is  : "<<trap(vec);

     // random :---- (function : 9)
     // int arr[] = {1, 2, 3, 4, 6};
     // int size = sizeof(arr) / sizeof(arr[0]);
     // int x, y;
     // int target;
     // cout << "Enter the sum you want to find " << endl;
     // cin >> target;
     // findSum(arr, size, &x, &y, target);
     // if (x != NULL && y != NULL)
     // {
     //      cout << "The number is : " << arr[x] << " and " << arr[y] << endl;
     // }else{
     //      cout<<"No such combination found";
     // }

     // random-2 :---- function : 10
     // int arr[] = {-1,0,1,2,-1,-4};
     // int* s;
     // int size = sizeof(arr)/sizeof(arr[0]);
     // s = threeSum(arr,2,size);
     // for(int i = 0 ; i < 3 ; i++){
     //      cout<<arr[s[i]]<<" ";
     // }

     // rotated array : function : 11
     // int arr[] = {1,2,3,4,5,6};
     // int size = sizeof(arr)/sizeof(arr[0]);
     // int diff;
     // cout<<"Enter the difference:"<<endl;
     // cin>>diff;
     // int *ptr;
     // ptr = rotate(arr,size,diff);
     // for(int i = 0 ; i < size ; i++){
     // cout<<arr[i]<<" ";
     // }

     // method : 2 ( funciton : 12 ) (time complexity - O(n2))
     // rotate2(arr,size,diff);

     // Aman Excel sheet - 21 :---- (funciton : 13)
     // vector<int> vec = {11, 15, 26, 38, 9, 10};
     // int target = 35;
     // vector<int> vec2;
     // vec2 = RotationPoint(&vec , target);
     // if(!vec2.size()){
     //      cout<<"No pair found"<<endl;
     // }else{
     // for(int i = 0 ; i < vec2.size(); i++){
     //      cout<<vec[vec2[i]]<<" ";
     // }
     // }

     // Aman Excel sheet - 30 :---- (funciton : 14)
     //     vector<int> vec = {7, 10, 4, 3, 20, 15};
     //      int elem;
     //      int k;
     //      cout<<"Enter the value of k : ";
     //      cin>>k;
     //      elem = KthSmallestElement(vec,k);
     //      if(!elem){
     //           cout<<"No element found"<<endl;
     //      }else{
     //           cout<<k<<"Th smallest eleemnt is "<<elem<<endl;
     //      }

     // Aman Excel sheet - 25 :---- (funciton : 16)
     // vector<int> vec = {4,5,6,7,0,1,2};
     // int min = findMinInRotatedArray(vec);
     // cout<<"The min ele is : "<<min<<endl;

     // Aman Excel sheet - 17 :---- (funciton : 17)
     // vector<int> vec = {4,5,6,7,0,1,2};
     // int target = 4;
     // int idx = FindIndexInRotatedArray(vec,target);
     // cout<<"The index ele is : "<<idx<<endl;

     // Aman Excel sheet - 23 :---- (funciton : 18)
     vector<int> vec = {-1,1,0,-3,3};
     vector<int> vec2;
     vec2 = ProductExceptSelf(vec);
     for(int i = 0 ; i < vec2.size() ; i++){
          cout<<vec2[i]<<" ";
     }
     
     return 0;
}