// //  ARRAY RECURSION QUESTIONS  //
// // first index of any number 
// #include<iostream>
// using namespace std;

// /* ITEREATIVE APPROCH */

// // int findIndex(int arr[] , int size , int x){
// //      for(int i = 0 ; i < size ; i++){
// //           if(arr[i]==x){
// //                return i;
// //           }
// //      }
// // }


// /* RECURSIVE APPROCH  */

// int findIndex(int arr[] , int size , int x){
//      if(size == 0){
//           return -1;
//      }
//      int cnt=0;
//      if(arr[0]==x){
//           cnt++;
//           return 0;

//      }
//      int ans = findIndex(arr+1 , size-1 , x);

//      if(ans == -1){
//           return -1;
//      }
//      else{
//           return ans+1;
//      }
// }

// int main(){
     
//      int arr[5] = {1,5,2,3,4};
//      int size = sizeof(arr)/sizeof(arr[0]);
//      int res = findIndex(arr , size , 2);
//      cout<<"The index is : "<<res<<endl;



// return 0;
// }




