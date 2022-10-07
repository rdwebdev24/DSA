#include <bits/stdc++.h>
using namespace std;

class node{
     public:
     int data;
     node* next;
     node* prev;
     node(int data){
          this->data = data,
          this->next = NULL;
          this->prev = NULL;
     }
};
 
// node* takeInput(){
//      int data;
//      cin>>data;
//      node* head = NULL;
//      node* next = NULL;
//      node* prev = NULL;
//      while(data!=-1){
//           node* newNode = new node(data);
//           if(head==NULL){
//                head = newNode;
//                next = newNode;
//           }else{
               
//           }
//      }
// }


void print(node* head){
     node* temp = head;
     while(temp!=NULL){
          cout<<temp->data<<"<=>";
          temp = temp->next;
     }
     cout<<"NULL";
     cout<<endl;
}

int getLength(node* head){
      node* temp = head;
      int length = 0;
     while(temp!=NULL){
          length++;
          temp = temp->next;
     }
     return length;
}

node* takeInput(){
     cout<<"enter linked list data "<<endl;
     int data;
     cin>>data;
     node* temp = NULL;
     node* head = NULL;

     while(data!=-1){
          node* newNode = new node(data);
          if(head==NULL){
               head = newNode;
               temp = newNode;
          }
          else{
               temp->next = newNode;
               newNode->prev = temp;
               temp = temp->next;
          }
          cin>>data;
     }
     return head;
}

void insertNode(node* &head, int data, int x){
     node* temp = head;
     int cnt = 1;
     node* newNode = new node(data);
     if(x<0){
          cout<<"can't insert"<<endl;
          return ;
     }

     if(x==1){
          newNode->next = temp;
          temp->prev = newNode;
          head = newNode;
          return ;
     }

     while(cnt<x-1){
          temp = temp->next;
          if(temp==NULL){
               cout<<"can't insert element"<<endl;
               return;
          }
          cnt++;
     }
     node* a = temp->next;
     newNode->prev = temp;
     newNode->next = a;
     if(a!=NULL){
          a->prev = newNode;
     }
     temp->next = newNode;

     return;
}

void deleteNode(node* &head, int x){
     int cnt=1;
     node* temp = head;

     if(x==1){
          head = temp->next;
          head->prev = NULL;
          delete temp;
          return;
     }
     
     while(cnt<x ){
          temp = temp->next;
          if(temp==NULL){
               cout<<"out of range element "<<endl;
               return;
          }
          cnt++;
     }
     temp->prev->next = temp->next;
     if(temp->next!=NULL){
          temp->next->prev = temp->prev;
     }
     delete temp;
}


int main(){
     system("cls");
     node* head = takeInput();
     print(head);
     // insertNode(head,25,5);
     // deleteNode(head,3);
     // cout<<"length : "<<getLength(head)<<endl;

     
return 0;
}