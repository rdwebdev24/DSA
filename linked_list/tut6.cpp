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


// recursively traversing 
void traverse(node *head){

     if(head == NULL){
          return;
     }
     cout<<head->data<<endl;;
     traverse(head->next);
}

node* takeInput(){
     cout<<"Enter the elements"<<endl;
     int data;
     cin>>data;
     node *head = NULL;
     while(data != -1){
          node *newNode = new node(data);

          if(head == NULL){
             head = newNode;
          }else{
               node *temp = head;
               while(temp->next != NULL){
                  temp =  temp->next;
               }
               temp->next = newNode;
          }

          cin>>data;
     }
     return head;
}


// insertion at the end 
node* insertEnd(node *head ,  int data){
     if(head == NULL){
          return new node(data);
     }else{
          head->next = insertEnd(head->next , data);
     }
}
int main(){
     node *head = takeInput();
     int data;
     cout<<"Enter the data to be insert at the end"<<endl;
     cin>>data;
     head =  insertEnd(head , data);
     cout<<"Printing the list"<<endl;
     traverse(head);
return 0;
}