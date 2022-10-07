//   DELETION OF A NODE    //



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


node* deleteNode(node *head , int i ){
     node *temp  = head;
     node *a , *b;
     int cnt = 1;
     if( i == 1){
          head = temp->next;
          delete temp;
          return head;
     }
     if(i < 0){
          cout<<"Can't delete from a negative position"<<endl;
          return head;
     }
     while(temp != NULL && cnt < i-1){
          temp = temp->next;
     }
     if(temp != NULL){
     a = temp->next;
     b = a->next;
     temp->next = b;
     delete a;
     }
     return head;
}

int main(){
     node *head = takeInput();
     print(head);
     int i ;
     cout<<"Enter the position you want to delete "<<endl;
     cin>>i;
     head = deleteNode(head , i);
     print(head);
return 0;
}