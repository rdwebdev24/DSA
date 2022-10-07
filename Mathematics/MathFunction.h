
// FUNCTION -1 //
int trailZero(int n){
     int res=0;
     
     for(int i=5; i<=n; i*=5){
          res = res + n/i;
     }
     return res;
}

// FUNCTION - 2 //
int GCD(int a, int b){
     int res;
     if(a>b){
          int temp = a;
          a = b;
          b = temp;
     }
     for(int i=a; i>0; i--){
          if(b%i==0 and a%i==0){
               res = i;
               break;
          }
     }
     return res;

}
// FUNCTION - 3 //
int GCD2(int a, int b){
     while(a!=b){
          if(a>b){
               a = a-b;
          }else{
               b = b-a;
          }
     }
     return a;
}
// FUNCTION - 4 //
int GCD3(int a , int b){
     if(b==0){
          return a;
     }else{
          return GCD3(b,a%b);
     }
}
// FUNCTION - 5 //
int LCM(int a , int b){
     int res;
     if(a>b){
          res=a;
     }else{
          res=b;
     }
     while(true){
          if(res%a==0 and res%b==0){
               return res;
          }
          res++;
     }
     return res;
}
// FUNCTION - 6 //
int LCM2(int a, int b){
     return (a*b)/(GCD3(a,b));
}

// FUNCTION - 7 //
bool Prime(int n){
     if(n==1){
          return false;
     }
     if(n==2 || n==3){
          return true;
     }
     if(n%2==0 or n%3==0){
          return false;
     }
     for(int i=5; i*i<n; i+=6){
          if(n%i==0 || n%(i+2)==0){
               return false;
          }
     }
     return true;
}
// FUNCTION - 8 //
void PrimeFactor(int n){
     for(int i=2;i<n; i++){
          if(Prime(i)){
               int x=i;
               while(n%x==0){
                    cout<<i<<" ";;
                    x=x*i;
               }
          }
     }
}
// FUNCTION - 9 //
void Divisors(int n){
     for(int i=1; i*i<n; i++){
          if(n%i==0){
               cout<<i<<" ";
               // int nxtDiv = n/i;
               // if(n%nxtDiv==0){
               //      cout<<nxtDiv<<" ";
               // }
               if(i!=n/i){
                    cout<<(n/i)<<" ";
               }
          }
     }
}

// FUNCTION - 10 //
void PrintPrime(int n){
     for(int i=2; i<=n; i++){
          if(Prime(i)){
               cout<<i<<" ";
          }
     }
}

//FUCTION - 11 //
void SievePrime(int n){
     vector<bool> isPrime(n+1,true);
     
     for(int i=2; i<n; i++){
          if(isPrime[i]){
               cout<<i<<" ";
               for(int j=i*i; j<=n; j=j+i){
                    isPrime[j]= false;
               }
          }
     }
     // for(int i=2; i<=n; i++){
     //      if(isPrime[i]){
     //           cout<<i<<" ";
     //      }
     // }

}

// FUNCTION - 12 //
int sum(int n){
        int rem;
        int sum=0;
        while(n!=0){
            rem=n%10;
            sum=sum+rem*rem;
            n=n/10;
        }
        return sum;
    }

//  FUNCTION - 13 //
int power(int x , int n){
     long long int sum=1;
     while(n>0){
          sum = sum*x;
          n--;
     }
     return sum;
}
//  FUNCTION - 14 //
int fact(int n){
     cout<<"n : "<<n<<endl;
        if(n<=1){
            return 1;
        }
        return n*fact(n-1);
    }
    int nCr(int n, int r){
     //    int N = fact(n);
     //    int R = fact(r);
     //    int N_R = fact(n-r);
     //    int x = N/N_R;
     //    x = x*(1/R);
     //    cout<<x;
     int l = r;
     int sum=1;
     while(l!=0){
          sum = n*sum;
          l--;
          n--;
     }
        return sum/fact(r);
    }

// FUNCTION - 13 //
int product(vector<int> vec){
     if(vec.size()==1){
          return vec[0];
     }
     int a = vec[vec.size()-1];
     vec.pop_back();
     int prod = a*product(vec);
     return prod;
}

// FUNCTION - 14 //
vector<long long int> productExceptSelf(vector<long long int>& arr, int n) {
    int prod = 1;
    vector<long long int>vec;
       for(int i=0;i<n;i++){
          if(arr[i]==0){
               continue;
          }
           prod = prod*arr[i];
       }
       cout<<"prod : "<<prod<<endl;
       for(int i=0;i<n; i++){
          cout<<"prod/arr[i] : "<<prod/arr[i]<<endl;
           vec.push_back(prod/arr[i]);
       }
       return vec;
    }

// FUNCTION - 15 //
float log_a_to_base_b(float a, float b)
{
    return log2(a) / log2(b);
}

//  FUNCTION - 16  //
 uint32_t reverseBits(uint32_t n) {
        vector<int> arr;
        for(int i=0; i<32;i++){
            arr.push_back(n%10);
            cout<<"n%10 : "<<(n%10)<<" ";
            n=n>>1;
        }
     //    cout<<"before reversing"<<endl;
     //     for(int i=0;i<arr.size();i++){
     //      cout<<arr[i]<<" ";
     //    }
        cout<<endl;
        int i=0;
        int j=arr.size()-1;
        while(i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
         cout<<"after reversing"<<endl;
        for(i=0;i<arr.size();i++){
          cout<<arr[i]<<" ";
        }
        return 0;
    }

