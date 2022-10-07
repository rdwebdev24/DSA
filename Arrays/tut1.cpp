#include <bits/stdc++.h>
#include <climits>
#include <math.h>
using namespace std;
#include "function.h"



int main()
{

     // USING DESIGENATED INITIALISER ---:
     // int arr[100] = {[0 ... 99] = 1};
     // for(int i = 0 ;i < 100 ; i++){
     //      cout<<arr[i]<<endl;
     // }

     // USING fill_n FUNCTION ---:
     // int n=10;
     // int val = 55;
     // int arr[n];
     // fill_n(arr,n,val);
     // for(int i = 0 ; i<n;i++){
     //      cout<<arr[i]<<endl;
     // }

     // int arr[10] = {1,2};
     // printArray(arr,10);

     // FINDING MIN AND MAX ----:
     // int arr[5] = {2,5,7,8,-1};
     // int max = arr[0];
     // int min = arr[0];
     // int len = sizeof(arr)/sizeof(arr[0]);
     // for(int i = 0 ; i<len;i++){
     //      if(arr[i]>max){
     //           max = arr[i];
     //      }
     //      if(arr[i]<min){
     //           min = arr[i];
     //      }
     // }
     // cout<<"Max is : "<<max<<endl<<"Min is : "<<min<<endl;

     // SUM OF ALL ELEMENT ---:
     // int n;
     // cout<<"Enter the value of n "<<endl;
     // cin>>n;
     // int arr[n];
     // cout<<"Enter the elements"<<endl;
     // for(int i = 0 ; i < n ; i++){
     //      cin>>arr[i];
     // }
     // int sum = 0;
     // for (int i = 0 ; i<n;i++){
     //      sum += arr[i];
     // }
     // cout<<"The sum of all the element is : "<<sum<<endl;

     // TO CHECK A NUMBER OF POWER 2 ----:
     // int n;
     // cout<<"Enter the number : "<<endl;
     // cin>>n;
     // int arr[30];
     // for(int i = 0 ;i<30;i++){
     //      arr[i] = pow(2,i);
     // }

     // for(int i = 0 ;i<30;i++){
     //     if(arr[i]==n){
     //      cout<<"The number is of power 2^"<<i<<endl;
     //     }else{
     //      cout<<"The number is not is power 2 "<<endl;
     //      break;
     //     }
     // }




     // SET BIT METHOD ---: : 
     // int n,x;
     // cout << "Enter the number : " << endl;
     // cin >> n;
     // int num = n;
     // int sum = 0;
     // while(num>0)
     // {
     //       x = num % 2;
     //      sum += x;
     //      num /= 2;
     // }
     // if(sum==1){
     //      cout<<"The number is power of 2"<<endl;
     // }else{
     //      cout<<"The number is not of power 2"<<endl;
     // }


     // SEARCHING IN AN ARRAY ----: (fucntion : 1)
     // int arr[10] = {3,4,78,3,2,8,9,2,25,90};
     // int key , size;
     // bool check;
     // size = sizeof(arr)/sizeof(arr[0]);
     // cout<<"Enter the key you want to search"<<endl;
     // cin>>key;
     // check = findKey(arr , 10 , key);
     // if(check){
     //      cout<<"The key is present"<<endl;
     // }
     // else{
     //      cout<<"the key is not present "<<endl;
     // }


     // REVERSING AN ARRAY ---: (function : 2)
     // int arr[6] = {3,4,78,2,8,6};
     // int size = sizeof(arr)/sizeof(arr[0]);
     // Reverse(arr , size);
     // printArray(arr,size);


     //---: SWAP ALTERNATE ELEMENT IN AN ARRAY (function : 3)
     // int arr[6] = {3,4,78,2,8,6};
     // int size = sizeof(arr)/sizeof(arr[0]);
     // reverseAlternate(arr,size);
     // printArray(arr,size);

     //---: FIND UNIQUE (function : 4)
     int arr[7] = {1,3,1,3,7,4,7};
     int size = sizeof(arr)/sizeof(arr[0]);
     
     int unique = findUnique(arr,size);
     cout<<"The unique element is : "<<unique<<endl;
     cout<<(1^0)<<endl;
     cout<<(1^3)<<endl;
     cout<<(2^1)<<endl;
     cout<<(3^3)<<endl;
     cout<<(0^7)<<endl;
     cout<<(7^4)<<endl;
     cout<<(3^7)<<endl;


     

     




     return 0;
}