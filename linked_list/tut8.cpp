//  MERGING OF TWO SORTED LINKED LIST  //


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
     cout<<"Printing the linked list"<<endl;
     while(temp != NULL){
     cout<<temp->data<<"->";
     temp = temp->next;
     }
     if(temp==NULL){
          cout<<"NULL"<<endl;
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

node* sorting_list(node* head1 , node* head2){
     node* p1 = head1;
     node* p2 = head2;
     node* dummynode = new node(-1);
     node* p3 = dummynode;

     while(p1!=NULL && p2!= NULL){
          if(p1->data<p2->data){
               p3->next = p1;
               p1 = p1->next;
          }else{
               p3->next = p2;
               p2 = p2->next;
          }
          p3 = p3->next;
     }
     while(p1!=NULL){
          p3->next = p1;
          p1 = p1->next;
          p3 = p3->next;
     }
     while(p2!=NULL){
          p3->next = p2;
          p2 = p2->next;
          p3 = p3->next;
     }
     return dummynode->next;
}


node* recursive_sorting(node* head1 , node* head2){

     if(head1 == NULL){
          return head2;
     }
     if(head2==NULL){
          return head1;
     }

     node* result;
     if(head1->data < head2->data){
          result = head1;
          result->next = recursive_sorting(head1->next , head2);
     }else{
          result = head2;
          result->next = recursive_sorting(head1 , head2->next);
     }
}

int main(){
     node *head1 = takeInput();
     print(head1);
     node *head2 = takeInput();
     print(head2);
     node *dummyHead = recursive_sorting(head1 , head2);
     print(dummyHead);
return 0;
}