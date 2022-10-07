using namespace std;
#include<iostream>

class stackUsingArray{
     int *data;
     int nextIndex;
     int capacity;
     public:
     stackUsingArray(int totalSize){
          data = new int[totalSize];
          nextIndex = 0;
          capacity = totalSize;
     }
     // returing the size of the stack
     int size(){
          return nextIndex;
     }
     // checking stack is empty or not 
     bool isEmpty(){
          return nextIndex==0;
     }
     // insert element 
     void push(int element){
          if(nextIndex == capacity){
               cout<<"Stack is full"<<endl;
               return;
          }
          data[nextIndex] = element;
          nextIndex++;
     }
     // delete element 
     int pop(){
          if(isEmpty()){
               cout<<"Stack is full"<<endl;
               return -1;
          }
          nextIndex--;
          return data[nextIndex];
     }


     // top element 
     int top(){
          return data[nextIndex-1];
     }

};