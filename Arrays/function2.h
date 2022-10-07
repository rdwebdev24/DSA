// GET TIME //
double getTimeinMicroSeconds()
{
     struct timeval start;
     gettimeofday(&start, NULL);
     double time = double(start.tv_sec) * 1000000.0 + double(start.tv_usec);
     return (time) / 1000000.0;
}

// PRINTING ARRAY FUNCTION //
void printArray(int arr[], int s)
{
     for (int i = 0; i < s; i++)
     {
          cout << arr[i] << " ";
     }
}

// function : 1 //
void findMinMax(int arr[], int size)
{
     int min = arr[0];
     int max = arr[0];

     for (int i = 0; i < size; i++)
     {
          if (arr[i] > max)
          {
               max = arr[i];
          }
          if (arr[i] < min)
          {
               min = arr[i];
          }
     }

     cout << "The min is : " << min << " and the max is  : " << max << endl;
}

// function : 2 //
void Reversing(int arr[], int size)
{
     int i = 0;
     int j = size - 1;
     while (i < j)
     {
          int temp = arr[i];
          arr[i] = arr[j];
          arr[j] = temp;
          i++;
          j--;
     }
}

// function : 3 //
bool AppearTwice(int arr[], int size)
{
     for (int i = 0; i < size; i++)
     {
          for (int j = i + 1; j < size; j++)
          {
               if (arr[i] == arr[j])
               {
                    return true;
               }
          }
     }
     return false;
}

// function : 4 //

int ContinousSubarray(int arr[], int size)
{
     int sum;
     int max = arr[0];
     for (int i = 0; i < size; i++)
     {
          sum = arr[i];
          if (i != size)
          {
               for (int j = i + 1; j < size; j++)
               {
                    sum = sum + arr[j];
                    if (sum > max)
                    {
                         max = sum;
                    }
               }
          }
          if (arr[i] > max)
          {
               max = arr[i];
          }
     }
     return max;
}

// function : 5
int MaxProfit(int arr[], int size)
{
     int max_profit = 0;
     int profit = 0;
     for (int i = 0; i < size - 1; i++)
     {
          for (int j = i + 1; j < size; j++)
          {
               if (arr[i] < arr[j])
               {
                    profit = arr[j] - arr[i];
               }
               if (profit > max_profit)
               {
                    max_profit = profit;
               }
          }
     }
     if (max_profit == 0)
     {
          return 0;
     }
     else
     {
          return max_profit;
     }
}

// funciton : 6
void repeatedNum(vector<int> &vec, int *missing, int *repeat)
{
     sort(vec.begin(), vec.end());
     for (int i = 0; i < vec.size(); i++)
     {
          if (vec[i] != i + 1)
          {
               *missing = i + 1;
          }
          if (vec[i] == vec[i + 1])
          {
               *repeat = vec[i];
          }
     }
}

// function : 7
int findKthLargest(vector<int> &vec, int k)
{
     sort(vec.begin(), vec.end());
     return vec.at(vec.size() - k);
}

// function : 8
int trap(vector<int> &vec)
{
     // int hold = 0;
     //    for(int i = 0 ; i < vec.size()-1; i++){
     //      int diff = vec[i] - vec[i+1];
     //      if(diff>0){
     //           hold += diff;
     //      }
     //    }
     //    return hold;

     int hold, diff, diff2;
     hold = 0;
     diff = 0;
     diff2 = 0;
     int next;
     for (int i = 0; i < vec.size() - 1; i++)
     {
          next = vec[i + 1];
          for (int j = i + 1; j < vec.size(); j++)
          {
               int diff = vec[i] - vec[i + 1];
               if (diff > 0)
               {
                    hold += diff;
               }
               if (next < vec[j] && vec[j] != 0)
               {
                    diff2 = vec[i] - vec[j];
                    hold += diff2;
               }
          }
     }
     return hold;
}

// function : 9 //
void findSum(int arr[], int size, int *x, int *y, int target)
{
     int p1 = 0;
     int p2 = size - 1;

     while (p2 > p1)
     {
          int sum = arr[p1] + arr[p2];
          if (sum > target)
          {
               p2--;
          }
          else if (sum < target)
          {
               p1++;
          }
          else
          {
               *x = p1;
               *y = p2;
               break;
          }
          *x = NULL;
          *y = NULL;
     }
}

// function : 10
int *threeSum(int arr[], int Target, int size)
{
     // int size = sizeof(arr)/sizeof(arr[0]);
     cout << "Size of array is : " << size << endl;
     int p1, p2 = size - 1;
     int sum = 0;
     int *result = new int[3];

     for (int i = 0; i < size; i++)
     {
          p1 = i + 1;
          while (p2 > p1)
          {
               sum = arr[i] + arr[p1] + arr[p2];
               cout << "Sum : " << sum << endl;
               if (sum == Target)
               {
                    cout << "Sum === target" << endl;
                    result[0] = i;
                    result[1] = p1;
                    result[2] = p2;
                    cout << "Result Index : " << result[0] << " " << result[1] << " " << result[2] << endl;
                    return result;
               }
               if (sum > Target)
               {
                    p2--;
                    cout << "p2 : " << p2 << endl;
               }
               else
               {
                    p1++;
                    cout << "p1 : " << p1 << endl;
               }
          }
     }
     return result;
}

// funciton : 11

int *rotate(int arr[], int size, int d)
{
     // rotate left
     // int i = d;
     // int j = 0;
     // int arr2[size];
     // while(i<size){
     //      arr2[j] = arr[i];
     //      i++;j++;
     // }
     // i = 0;
     // while(i<d){
     //      arr2[j] = arr[i];
     //      i++;
     //      j++;
     // }
     // i = 0;
     // for(int i = 0 ; i < size ; i++){
     //      arr[i] = arr2[i];
     // }
     // return arr;
}

// fucntion : 12

void rotate2(int arr[], int size, int d)
{

     // rotating counter clockwise
     // for(int i = 0 ; i < d ; i++){
     //      int temp = arr[0];
     //      for(int j = 0 ; j < size-1 ; j++){
     //           arr[j] = arr[j+1];
     //      }
     //      arr[size-1] = temp;
     // }

     //  for(int i = 0 ; i < size ; i++){
     //      cout<<arr[i]<<" ";
     // }

     // rotating clockwise
     for (int i = 0; i < d; i++)
     {
          int temp = arr[size - 1];
          for (int j = size - 1; j > 0; j--)
          {
               arr[j] = arr[j - 1];
          }
          arr[0] = temp;
     }

     for (int i = 0; i < size; i++)
     {
          cout << arr[i] << " ";
     }
}

// function : 13

vector<int> RotationPoint(vector<int> *arr , int target)
{
     vector<int> vec2;
     int point;
     for (int i = 0; i < (*arr).size() - 1; i++)
     {
          if ((*arr)[i] > (*arr)[i + 1])
          {
               point = i + 1;
               break;
          }
     }
     cout<<"Point is : "<< point<<endl;
     int i = 0;
     int j = point;
     while (i < j)
     {
          int temp = (*arr)[i];
          (*arr)[i] = (*arr)[j - 1];
          (*arr)[j - 1] = temp;
          i++;
          j--;
     }
     

     i = j;
     j = (*arr).size();
     while (i < j - 1)
     {
          int temp = (*arr)[i];
          (*arr)[i] = (*arr)[j - 1];
          (*arr)[j - 1] = temp;
          i++;
          j--;
          
     }
     j = point;
      cout << "second reverse : ";
     for (int i = j; i < (*arr).size(); i++)
     {
          cout << (*arr)[i] << " ";
     }
      cout<<endl;

     i = 0;
     j = (*arr).size()-1;
     while(i < j){
          int temp = (*arr)[i];
          (*arr)[i] = (*arr)[j];
          (*arr)[j] = temp;
          i++;
          j--;
     }
      cout << "third reverse : ";
     for (int i = 0; i < (*arr).size(); i++)
     {
          cout << (*arr)[i] << " ";
     }
     cout<<endl;

    int p1,p2;
    p1 = 0;
    p2 = (*arr).size()-1;
    int sum = 0;
    while(p1<p2){
     sum = (*arr)[p1]+(*arr)[p2];
     if(sum==target){
          vec2.push_back(p1);
          vec2.push_back(p2);
          return vec2;
     }else if(sum>target){
          p2--;
     }else{
          p1++;
     }
    }
     cout<<endl;
     return vec2;
}

// function : 14
int KthSmallestElement(vector<int> vec , int k){
     sort(vec.begin() , vec.end());
     if(k>vec.size()){
          cout<<"enter value K <= array.size()"<<endl;
          return 0;
     }
     return vec.at(k-1);
}

// funciton : 15
void mergeCommonInterval(int arr[],int s){

}
// function : 16
int findMinInRotatedArray(vector<int> arr){
     int point = 0;
     for (int i = 0; i < arr.size() - 1; i++)
     {
          if (arr[i] >arr[i + 1])
          {
               point = i + 1;
               break;
          }
     }
     if(point != 0){

      int i = 0;
     int j = point;
     while (i < j)
     {
          int temp = arr[i];
          arr[i] = arr[j - 1];
          arr[j - 1] = temp;
          i++;
          j--;
     }


     i = j;
     j = arr.size();
     while (i < j - 1)
     {
          int temp = arr[i];
          arr[i] = arr[j - 1];
          arr[j - 1] = temp;
          i++;
          j--;
          
     }
   

     i = 0;
     j = arr.size()-1;
     while(i < j){
          int temp = arr[i];
          arr[i] = arr[j];
          arr[j] = temp;
          i++;
          j--;
     }
     }


     int min = *min_element(arr.begin() , arr.end());
     return min;

}
 

// function : 17

int getIndex(vector<int> v, int K)
{
    auto it = find(v.begin(), v.end(), K);
  
    // If element was found
    if (it != v.end()) 
    {
      
        // calculating the index
        // of K
        int index = it - v.begin();
        return index;
    }
    else {
       return -1;
    }
}


int FindIndexInRotatedArray(vector<int> arr , int target){
 int point = 0;
     for (int i = 0; i < arr.size() - 1; i++)
     {
          if (arr[i] >arr[i + 1])
          {
               point = i + 1;
               break;
          }
     }
      cout<<"Point is : "<< point<<endl;
     if(point != 0){

      int i = 0;
     int j = point;
     while (i < j)
     {
          int temp = arr[i];
          arr[i] = arr[j - 1];
          arr[j - 1] = temp;
          i++;
          j--;
     }
j = point;
     cout << "First reverse : ";
     for (int i = 0; i < j; i++)
     {
          cout << arr[i] << " ";
     }
      cout<<endl;

     i = j;
     j = arr.size();
     while (i < j - 1)
     {
          int temp = arr[i];
          arr[i] = arr[j - 1];
          arr[j - 1] = temp;
          i++;
          j--;
          
     }
   j = point;
      cout << "second reverse : ";
     for (int i = j; i < arr.size(); i++)
     {
          cout << arr[i] << " ";
     }
      cout<<endl;
     i = 0;
     j = arr.size()-1;
     while(i < j){
          int temp = arr[i];
          arr[i] = arr[j];
          arr[j] = temp;
          i++;
          j--;
     }
     }

     cout<<"After 3rd reverse : ";
     for(int i = 0 ; i < arr.size(); i++){
          cout<<arr[i]<<" ";
     }
     cout<<endl;
    int index  = getIndex(arr,target);
    int newIndex = index+point;

    if(index==-1){
     return -1;
    }
    else if(newIndex>arr.size()-1){
     return newIndex - arr.size();
    }else{
     return newIndex;
    }

}

// function : 18 

vector<int> ProductExceptSelf(vector<int> arr){
     // not optimised ( brute forces )
     // int p = 1;
     // vector<int> vec2;
     // for(int i = 0 ; i < arr.size(); i++){
     //      for(int j = 0 ; j  < arr.size(); j++){
     //           if( i ==j ){

     //           }else{
     //                p *= arr[j];
     //           }
     //      }
     //      vec2.push_back(p);
     //      p = 1;
     // }
     // return vec2;
     
}