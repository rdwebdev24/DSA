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
               cout << "Queue is full" << endl;
               return;
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