void fun1(int n){
     if(n==0){
          return;
     }
     fun1(n/2);
     cout<<n%2;
}

// function - 2 //
void printN_to_1(int n){
     if(n==0){
          return;
     }
     cout<<n<<" ";
     printN_to_1(n-1);
}
// function - 3 //
void print1_to_N(int n){
     if(n==0){
          return;
     }
     print1_to_N(n-1);
     cout<<n<<" ";
}

// function - 4 //
int sumofdigit(int n){
     if(n<=1){
          return 1;
     }
     return n%10+sumofdigit(n/10);
}

// function - 5 //
int firstIdx(int arr[], int k,int n){
     if(n==0){
          return -1;
     }
     if(arr[0]==k){
          return 0;
     }
     int idx = firstIdx(arr+1,k,n-1);
     if(idx==-1){
          return -1;
     }
     return idx+1;
}


// function - 6 //
int lastIdx(int arr[], int k,int n){
     if(n==0){
          return -1;
     }
     if(arr[0]==k){
          return 0;
     }
     int idx = firstIdx(arr+1,k,n-1);
     if(idx==-1){
          return -1;
     }
     return idx+1;
}

// functrion - 7 //

int allIndex(int arr[], int size, int x){
     if(size==0){
          return 0;
     }
     int ans = allIndex(arr,size-1,x);
     if(arr[size-1]==x){
          return ans+1;
     }
     return ans;
}

// function - 8  //

int length(char str[]){
     if(str[0]=='\0'){
          return 0;
     }
     int l = length(str+1);
     return l+1;
}

// funciton - 9 //
void removeLetter(char arr[], char x){
     if(arr[0]=='\0'){
          return;
     }
     removeLetter(arr+1,x);
     if(arr[0]==x){
          for(int i=0; arr[i]!='\0'; i++){
               arr[i] = arr[i+1];
          }
     }
}

// function - 10  //

void removeExtraChar(string s){
     if(s.size()==0){
          return;
     }
     removeExtraChar(s.substr(1));
     if(s[0]!=s[1]){
          for(int i=0; i<s.size(); i++){
               s[i] = s[i+1];
          }
     }else{
          return;
     }
     cout<<s<<endl;
}