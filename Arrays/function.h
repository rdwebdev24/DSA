
// PRINTING ARRAY FUNCTION //
void printArray(int arr[], int s)
{
     for (int i = 0; i < s; i++)
     {
          cout << arr[i] << " ";
     }
}

// GET TIME //
// double getTimeinMicroSeconds()
// {
//      struct timeval start;
//      gettimeofday(&start, NULL);
//      double time = double(start.tv_sec) * 1000000.0 + double(start.tv_usec);
//      return (time) / 1000000;
// }

// function : 1 //
bool findKey(int arr[], int size, int key)
{
     for (int i = 0; i < size; i++)
     {
          if (arr[i] == key)
          {
               return true;
               break;
          }
     }
     return false;
}

// function : 2 //

void Reverse(int arr[], int size)
{
     int i = 0;
     int j = size - 1;
     int mid = j / 2;

     while (i <= mid)
     {
          int temp = arr[i];
          arr[i] = arr[j];
          arr[j] = temp;
          i++;
          j--;
     }
}

// function : 3 //

void reverseAlternate(int arr[], int size)
{
     for (int i = 0; i < size; i += 2)
     {
          if (i + 1 < size)
          {
               int temp = arr[i];
               arr[i] = arr[i + 1];
               arr[i + 1] = temp;
          }
     }
}

// function : 4

int findUnique(int arr[], int size)
{
     int ans = 0;
     for (int i = 0; i < size; i++)
     {
          ans = ans ^ arr[i];
     }
     return ans;
}

// function : 5 //
int findDuplicate(int arr[], int size)
{
     for (int i = 0; i < size; i++)
     {
          for (int j = i + 1; j < size; j++)
          {
               if (arr[i] == arr[j])
               {
                    return i;
               }
          }
     }
}
// fucntion : 5(b) //
int fincDuplicate_2(int arr[], int size)
{
     int ans = 0;
     for (int i = 0; i < size; i++)
     {
          ans = ans ^ arr[i];
     }
     for (int i = 1; i < size; i++)
     {
          ans = ans ^ i;
     }
     return ans;
}

// function : 6 //

// function : 7 //

void PairSum(int arr[], int size, int sum)
{
     for (int i = 0; i < size; i++)
     {
          for (int j = i + 1; j < size; j++)
          {
               if (arr[i] + arr[j] == sum)
               {
                    if (arr[i] < arr[j])
                    {
                         cout << arr[j] << " " << arr[i] << endl;
                    }
                    else
                    {
                         cout << arr[i] << " " << arr[j] << endl;
                    }
               }
          }
     }
}

// function : 8 //

void sort_zero_and_one(int arr[], int size)
{
     int cnt_zero = 0;
     for (int i = 0; i < size; i++)
     {
          if (arr[i] == 0)
          {
               cnt_zero++;
          }
     }
     for (int i = 0; i < size; i++)
     {
          if (i >= 0 && i < cnt_zero)
          {
               arr[i] = 0;
          }
          if (i >= cnt_zero && i < size)
          {
               arr[i] = 1;
          }
     }
     printArray(arr, size);
}

//---: TWO POINTER APPROCH FOR PREVIOUS QUESTION :---//

void sort_zero_and_one_two_pointer(int arr[], int size)
{
     int i = 0;
     int j = size - 1;
     while (i < j)
     {
          while (arr[i] == 0)
          {
               i++;
          }
          while (arr[j] == 1)
          {
               j--;
          }
          int temp = arr[i];
          arr[i] = arr[j];
          arr[j] = temp;
          i++;
          j--;
     }
     printArray(arr, size);
}
