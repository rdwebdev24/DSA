#include <bits/stdc++.h>
using namespace std;
 
class node{
     public:
     int data;
     node* next;
     node(int data){
          this->data = data;
          next = NULL;
     }
};

node* takeInput(){
     int data;
     cin>>data;

     node* head = NULL;
     node* temp = NULL;

     while(data!=-1){
          node* newNode = new node(data);
          if(head==NULL){
               head = newNode;
               temp = newNode;
          }else{
               temp->next = newNode;
               temp = temp->next;
          }
          cin>>data;
     }
     temp->next = head;
     return head;
}

void print(node* head){
     node* temp = head->next;
     cout<<head->data<<"->";
     while(temp!=head){
          cout<<temp->data<<"->";
          temp = temp->next;
     }
     cout<<"head";
     cout<<endl;
}

void insertAtStart(node* &head, int data){
     node* newNode = new node(data);
     newNode->next = head;
     node* temp = head->next;

     while(temp->next!=head){
          temp = temp->next;
     }
     temp->next = newNode;
     head = newNode;
}

void InsertAtEnd(node* &head, int data){
      node* newNode = new node(data);
     newNode->next = head;
     node* temp = head->next;

     while(temp->next!=head){
          temp = temp->next;
     }
     temp->next = newNode;
}

int main(){
     system("cls");
     node* head = takeInput();
     print(head);
     // insertAtStart(head,25);
     // InsertAtEnd(head,25);
     
     print(head);
return 0;
}