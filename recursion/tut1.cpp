

#include<iostream>
using namespace std;

// int factorial(int n){
//      if(n==1){
//           return 1;
//      }
//      int result = factorial(n-1);
//      return n*result;
// }


int fibonacci(int n){
     if(n==0){
          return 0;
     }
     if(n==1){
          return 1;
     }
     int x = fibonacci(n-1);
     int y = fibonacci(n-2);
     return x+y;
}


bool is_sorted(int a[] , int size){
     if(size == 0 || size == 1){
          return true;
     }
     if(a[0]>a[1]){
          return false;
     }
     bool sorted = is_sorted(a+1,size-1);
     return sorted;
}

int main(){
     // cout<<factorial(5);
     cout<<fibonacci(50); 
     // int arr[6] = {1,2,3,9,4,5};
     // cout<<is_sorted(arr,6);
return 0;
}