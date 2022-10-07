// FUNCTION - 1 //
int doUnion(int a[], int n, int b[], int m)
{
    int i = 0;
    int j = 0;
    int cnt = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            i++;
            cnt++;
        }
        if (a[i] > b[j])
        {
            j++;
            cnt++;
        }
        if (a[i] == b[j])
        {
            i++;
            j++;
            cnt++;
        }
    }
    while (i < n)
    {
        cnt++;
        i++;
    }
    while (j < m)
    {
        j++;
        cnt++;
    }
    return cnt;
}

// FUNCTION - 2 //
int peakElement(int arr[], int n)
{
    if (n == 1)
    {
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (arr[i] > arr[i + 1])
            {
                return i;
            }
        }
        if (i == n - 1)
        {
            if (arr[i] > arr[i - 1])
            {
                return i;
            }
        }
        if (i > 0 && i < n)
        {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            {
                return i;
            }
        }
    }
}

// FUNCTION - 3 //
int sum(int arr[], int n)
{
    if (n == 1)
    {
        return arr[0];
    }
    int NewSum = sum(arr + 1, n - 1);
    return NewSum + arr[0];
}
int EquilibrimPoint(int arr[], int n)
{
    if (n == 1)
    {
        return 0;
    }
    int i = 1;
    for (i = 1; i < n - 1; i++)
    {
        int beforeSum = sum(arr, i);
        int afterSum = sum(arr + i + 1, n - i - 1);
        if (beforeSum == afterSum)
        {
            return i + 1;
        }
    }
    if (i == n - 1)
    {
        return -1;
    }
}

//  FUNCTION - 4 //

int CountPair(int arr[], int n, int k)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                cnt++;
            }
        }
    }
    return cnt;
}

//   SECOND APPROCH  // //--pending

int CountPair2(int arr[], int n, int k)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int pair = k - arr[i];
    }
    return cnt;
}

//   FUNCTION - 5   // // pending

int NonRepeating(int arr[], int n)
{
}

//  FUNCTION - 6 //

string removeDuplicate(string str)
{
    sort(str.begin(), str.end());
    if (str.length() == 1)
    {
        return str;
    };
    string newStr = removeDuplicate(str.substr(1));
    if (str[0] == newStr[0])
    {
        return newStr;
    }
    return str[0] + newStr;
}

//  FUNCTION - 7 //
int OnlyOneNonRepeatingELement(int arr[], int n) 
    { 
        int x=0;
      for(int i = 0; i<n ; i++){
        if(i+1){
          x = x^arr[i];
        }
      }
      return x;
    } 

// FUNCITON - 8 //

int transitionPoint(int arr[], int n) {
    int s = 0;
    int e = n;
    if(n==1){
        if(arr[0]==1){
            return 0;
        }else{
            return -1;
        }
    }
    while(true){
        int mid = (s+e)/2;
        if(arr[mid]==0){
            if(mid==n-1){
                return -1;
            }
            if(arr[mid+1]==1){
                return mid+1;
            }
            s = mid+1;
        }
        if(arr[mid]==1){
            if(mid==0){
                return -1;
            }
            if(arr[mid-1]==0){
                return mid;
            }
            e = mid-1;
        }
    }
}

//  FUNCTION - 9  //
void rotateArr(int arr[], int d, int n){
    if(d==n){
        return;
    }
    int i = 0 ;
    int j = d-1;;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
     i = d;
     j = n-1;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
     i = 0;
     j = n-1;
     while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    
}


//  FUNCTION - 6  //

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        vector<int> vec;
        int i = 0;
        int j = 0;
        while(i<n && j<m){
            if(arr1[i]<arr2[j]){
                if(i>0){
                    if(arr1[i-1]!=arr1[i]){
                        vec.push_back(arr1[i]);
                    }
                }else{
                    vec.push_back(arr1[i]);
                }
                 i++;
            }
            else if(arr1[i]>arr2[j]){
                if(j>0){
                    if(arr2[j-1]!=arr2[j]){
                        vec.push_back(arr2[j]);
                    }
                }else{
                    vec.push_back(arr2[j]);
                }
                j++;
            }
            else{
                vec.push_back(arr1[i]);
                i++;
                j++;
            }
        }
        while(i<n){
            if(arr1[i+1]!=arr1[i]){
                vec.push_back(arr1[i]);
            }
            i++;
        }
         while(j<m){
            if(arr2[j+1]!=arr2[j]){
                vec.push_back(arr2[j]);
            }
            j++;
        }
        return vec;
    }

//  FUCNTION - 11  //

int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        int i = 0;
        int j = 0;
        int cnt = 0;
        while(i<n&&j<m){
            if(a[i]<b[j]){
                i++;
            }
            if(a[i]>b[j]){
                j++;
            }
            if(a[i]==b[j]){
                i++;
                j++;
                cnt++;
            }
        }
        return cnt;
    }

// FUNCTION - 12 //