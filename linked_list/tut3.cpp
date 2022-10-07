//   TAKE INPUT - 2     //

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
     cout<<temp->data<<'->';
     temp = temp->next;
     }
     if(temp == NULL){
          cout<<NULL;
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

int main(){
     node *head = takeInput();
     print(head);
return 0;
}