// FINDING THE LENGHT OF THE LINKED LIST ANS THE MID ELEMENT //

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

int find_lenght(node* head){
     node* temp = head;
     int cnt = 0;
     while(temp!=NULL){
          temp = temp->next;
          cnt++;
     }
     return cnt;
}

int find_mid_element(node* head ){

          // node* temp = head;
          // int cnt = 0;
          // int mid = (length-1)/2;
          // while(cnt!=mid){
          //      temp = temp->next;
          //      cnt++;
          // }
          // if(length%2==0){
          // cout<<"The mid elements of the list is : "<<temp->data<<" and "<<temp->next->data<<endl;
          // }else{
          // cout<<"The mid element of the list is : "<<temp->data<<endl;
          // }

          //   WITHOUT USING THE LENGTH 

          node* slow  = head;
          node* fast  = head->next;

          while(fast!=NULL && fast->next != NULL){
               slow = slow->next;
               fast = fast->next->next;
          }
          // cout<<"The mid element is : "<<slow->data;
     return slow->data;

}

int main(){
     node *head = takeInput();
     traverse(head);
     int length = find_lenght(head);
     cout<<"The lenght of the linked list is : "<<length<<endl;
     int ele = find_mid_element(head);
     cout<<"mid element is : "<<ele;
return 0;
}