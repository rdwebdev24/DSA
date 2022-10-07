// stack using linked list //

#include<iostream>
using namespace std;
template <class T>
class Node{
     public:
     T data;
     Node<T> *next;
     Node(T data){
          this->data = data;
          next = NULL;
     }
};
template <class T>
class stack{
     Node<T>* head;
     int size = 0;
     public:
     stack(){
          head = NULL;
     }
     
     int getSize(){
          return size;
     }

     bool isEmpty(){
          return head==NULL;
     }

     void push(T element){
          Node<T> n(element);
          n.next = head;
          head = &n;
          size++;
     }

     // T pop(){
     //      if(head){
     //      T ans = head;
     //      head = head->next;
     //      delete ans;
     //      size--;
     //      cout<<"Node is deleted "<<endl;
     //      }
     //      else{
     //           cout<<"list is empty "<<endl;
     //      }
     // }
     T top(){
          if(head){
          return head->data;
          }
          else{
               cout<<"Empty list"<<endl;
          }
     }
};

// void printing_list()

int main(){
     Node <int>n1(25);
     stack<int> s;
     s.push(25);  
     s.push(25);
     s.push(97);
     cout<<s.top()<<endl;
     cout<<s.getSize()<<endl;
     cout<<s.isEmpty()<<endl;
     // s.pop();
     cout<<s.top();
return 0;
}