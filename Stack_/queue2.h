template <class T>
class QueueUsingArray
{
     T *data;
     int firstIndex;
     int nextIndex;
     int size;
     int capacity;

public:
     QueueUsingArray(int s)
     {
          data = new T[s];
          nextIndex = 0;
          firstIndex = -1;
          size = 0;
          capacity = s;
     }
     int getSize()
     {
          return size;
     }
     bool isEmpty()
     {
          return size == 0;
     }
     // Insert element
     void enquque(T element)
     {
          if (size == capacity)
          {
               T *newData = new T[2*capacity];
               int j = 0;
               for(int i = firstIndex ; i < capacity; i++){
                    newData[j] = data[i];
                    j++;
               }
               for(int i = 0 ; i < firstIndex ; i++){
                    newData[j] = data[i];
                    j++;
               }
               delete []data;
               data = newData;
               firstIndex = 0;
               nextIndex =  capacity;
               capacity *= 2;

               // cout << "Queue is full" << endl;
               // return;
          }

          data[nextIndex] = element;
          nextIndex=(nextIndex + 1) % capacity;
          if (firstIndex == -1)
          {
               firstIndex = 0;
          }
          size++;
     }
     // delete element
     T dequeue()
     {
          if (isEmpty())
          {
               cout << "Queue is empty ! " << endl;
               return 0;
          }
               T ans = data[firstIndex];
                firstIndex=(firstIndex + 1) % capacity;
               size--;
               if(size==0){
                    firstIndex=-1;
                    nextIndex=0;
               }
               return ans;
     }
     T front()
     {
          if (isEmpty())
          {
               cout << "Queue is empty ! " << endl;
               return 0;
          }
          return data[firstIndex];
     }
};