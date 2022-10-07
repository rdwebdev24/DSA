#include <iostream>
using namespace std;
template <class T>
class stackUsingArray
{
     T *data;
     int nextIndex;
     int capacity;

public:
     stackUsingArray()
     {
          data = new T[4];
          nextIndex = 0;
          capacity = 4;
     }
     // returing the size of the stack
     int size()
     {
          return nextIndex;
     }
     // checking stack is empty or not
     bool isEmpty()
     {
          return nextIndex == 0;
     }
     // insert element
     void push(T element)
     {
          if (nextIndex == capacity)
          {
               T *newData = new T[2 * capacity];
               for (int i = 0; i < capacity; i++)
               {
                    newData[i] = data[i];
               }
               capacity *= 2;
               delete[] data;
               data = newData;
          }
          data[nextIndex] = element;
          nextIndex++;
     }
     // delete element
     T pop()
     {
          if (isEmpty())
          {
               cout << "Stack is empty" << endl;
               return -1;
          }
          nextIndex--;
          return data[nextIndex];
     }

     // top element
     T top()
     {
          return data[nextIndex - 1];
     }
     // get middle
     int middle(){
          int mid = nextIndex/2;
          return data[mid];
     }

     // delete middle //
     void deleteMid(){
          int mid = nextIndex/2;
          for(int i=mid; i<nextIndex; i++){
               data[i] = data[i+1];
          }
          nextIndex--;
     }
};