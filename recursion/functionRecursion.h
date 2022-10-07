// function : 1
void printNum(int num){
     if(num==0){
          return;
     }
     printNum(num-1);
     // cout<<num<<" ";
}

// funciton : 2
int fibonacci(int n){
     if(n == 0 ){
          return 0;
     }
     if(n == 1 ){
          return 1;
     }
     int s1 = fibonacci(n-1);
     int s2 = fibonacci(n-2);
     return s1+s2;
}

// funciton : 3
void printArr(int arr[] , int size){
     if(size==0){
          return;
     }
     // cout<<arr[0]<<" ";
     printArr(arr+1 , size-1);
}

// function : 4
// nahi aaya //

// function : 5
int sumDigit(int n){
     if(n==0)
     return 0;
     return (n%10 + sumDigit(n/10));
     
}

// function : 6
int largestElement(int arr[] , int size){
     if(size==1){
          return arr[0];
     }
     int max = largestElement(arr+1,size-1);
     if(max>arr[0]){
          return max;
     }
     else{
          return arr[0];
     }
}

// function : 7
long double power(double x , int n){
     if(n>=0){
     if(n==0){
          return 1;
     }
     long double sum = power(x,n-1);
     return sum*x;
     }else{
           if(n==0){
          return 1;
     }
     long double sum = power(x,n+1);
     return sum*(1/x);
     }
}

// function : 8
int DigitalSum(int n){
     if(n==0){
     return 0;
     }
     int x = (n%10 + sumDigit(n/10));
     if(x>=9){
          int y = (x%10 + sumDigit(x/10));
          return y;
     }else{
          return x;
     }
     
}

// function : 9
int luckeyNum(int arr,int size){
     
}