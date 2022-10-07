// FUNCTION - 1 //
bool setBit(int n, int k){
     return (n>>(k-1))%2!=0;
     
}

//   FUNCTION - 2 //
bool evenOdd(int n){
     return (n&1);
}

//  FUNCTION - 3 //
int countSetBit(int n){
     int cnt=0;
     // while(n!=0){
     //      if(n%2==1){
     //           cnt++;
     //      }
     //      // n/=2;
     //      n = n>>1;
     // }

     while(n!=0){
          n = n&(n-1);
          cnt++;
     }
     return cnt;
}

// FUNCTION - 4 //
vector<int> sumZero(int n) {
        vector<int> vec;
        int mid;
        if((n&1)){
          mid = n/2;
          vec.push_back(0);
        }
        mid = n/2;
        for(int i=0;i<mid;i++){
          vec.push_back(i+1);
        }
        for(int i=0;i<mid;i++){
          vec.push_back(-(i+1));
        }

        for(int i=0;i<n;i++){
          cout<<vec[i]<<" ";
        }
        return vec;
    }


//  FUNCTION - 5  //
int numWaterBottles(int B, int e) {
        int rem=0;
        int tb=B;
        while(B!=0){
            tb=tb+B/e;
            cout<<"B/e : "<<(B/e)<<endl;
            cout<<"tb : "<<tb<<endl;
            rem=B%e+rem;
            cout<<"rem : "<<rem<<endl;
            if(rem%3==0){
                tb++;
                rem++;
            }
            B=B/e;
            cout<<"B : "<<B<<endl;
        }
        return tb;
    }

//  FUNCTION - 6 //
bool powerOf2(int n){
  // brute force //
  // if(n==0){
  //   return false;
  // }
  // while(n!=1){
  //   if(n%2!=0){
  //     return false;
  //   }
  //   n/=2;
  // }
  // return true;

  // optimsed approch - 1 //
  //  int cnt=0;
  //   while(n!=0){
  //         n = n&(n-1);
  //         cnt++;
  //    }
  //    if(cnt==1){
  //     return true;
  //    }
  //    return false;
  if(n==0){
    return false;
  }
  return ((n&(n-1))==0);
}

//  FUNCTION - 7 //
int findMissing(int arr[], int n){
  int res=0;
  for(int i=0; i<n;i++){
    res=res^arr[i];
  }
  for(int i=1; i<=n+1; i++){
    res = res^i;
  }
  return res;
}

bool divideArray(vector<int>& arr) {
        map<int,int> m;
        for(int i=0; i<arr.size(); i++){
            m[arr[i]]++;
        }
       map<int,int> :: iterator it = m.begin();
       while(it!=m.end()){
        if((it->second)%2!=0){
          return false;
        }
        it++;
       }
        return true;
    }



 int fact(int n)
    {
        if(n==0)
        return 1;
     int res = 1;
        for (int i = 2; i <= n; i++)
            res = res * i;
        return res;
    }
 
    int nCr(int n, int r)
    {
        return fact(n) / (fact(r) * fact(n - r));
    }
 
    vector<vector<int>> generate(int n) {
        // vector<vector<int>> v;
        // vector<int> vec;
        // for(int i=0; i<n;i++){
        //   // cout<<"i : "<<i<<endl;
        //     for(int j=0;j<=i;j++){
        //       // cout<<"j : "<<j<<endl;
        //         int x = nCr(i,j);
        //         cout<<"x : "<<x<<endl;
        //         vec.push_back(x);
        //     }
        //         v.push_back(vec);
        // }
        // return v;

        vector<vector<int>> v;
        vector<int> vec;
        
        for(int i=0; i<n; i++){
          cout<<"inside for : "<<endl;
         vec.push_back(1);
          for(int j=1; j<=i-1; j++){
            cout<<"inside for2 : "<<endl;
            int sum = v[i-1][j-1] + v[i-1][j];
            vec.push_back(sum);
          }
          if(i>0){
            vec.push_back(1);
          }
          v.push_back(vec);
        }
        return v;
    }

vector<vector<long long int>> printPascal(int n) 
{   
  // Write your code here.
    vector<vector<long long int>> v(n);
    for(int i=0; i<n; i++)
    {
        v[i].resize(i+1);
        v[i][0]=1;
        v[i][i]=1;
        for(int j=1; j<i; j++)
        {
            v[i][j]=v[i-1][j-1]+v[i-1][j];
        }
    }
    return v;
}