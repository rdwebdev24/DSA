// INSERTING NODE //



#include<iostream>
using namespace std;

class node{
     public:
     int data;
     node *next;
     node(int data){
          this->data = data;
          next = NULL;
     }
};

void print(node *head){
     node *temp = head;
     cout<<"Printing the list"<<endl;
     while(temp != NULL){
     cout<<temp->data<<endl;
     temp = temp->next;
     }

}

node* takeInput(){
     cout<<"Enter the elements"<<endl;
     int data;
     cin>>data;
     node *head = NULL;
     node *tail = NULL;
     while(data != -1){
          node *newNode = new node(data);

          if(head == NULL){
             head = newNode;
             tail = newNode;
          }else{
              tail->next = newNode;
              tail = tail->next;
          }

          cin>>data;
     }
     return head;
}


node* insertNode(node *head ,  int i , int data){
     node *newNode = new node(data);
     int count = 0;
     node *temp = head;

     if(i == 0){
          newNode->next = head;
          head = newNode;
          return head;
     }
     if(i < 0){
          cout<<"Can't insert at negative position"<<endl;
          return head;
     }
     while(temp != NULL && count < i-1){
          temp = temp->next;
          count++;
     }

     if(temp != NULL){
     // node *a = temp->next;
     // temp->next = newNode;
     // newNode->next = a;

     newNode->next = temp->next;
     temp->next = newNode;
     }
     return head;
}

int main(){
     node *head = takeInput();
     print(head);
     int i , data;
     cout<<"Enter the position and the value of data you want to insert "<<endl;
     cin>>i>>data;
      head = insertNode(head , i , data);
     print(head);
return 0;
}