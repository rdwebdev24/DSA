//   LINKED LIST    //


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
     // node *temp = head;
     
     while(head != NULL){
     cout<<head->data<<endl;
     head = head->next;
     }

     // while(temp != NULL){
     // cout<<temp->data<<endl;
     // temp = temp->next;
     // }
     cout<<"Printing the list second time"<<endl;

     // dekh bhaii head ho chuka hai null to isiliye
     // ye while loop nahi chalega 
     // to isiliye head to ek temporary variable me
     // save krna better hai 
     // temp = head;
     // while(temp != NULL){
     // cout<<temp->data<<endl;
     // temp = temp->next;
     // }
}

int main(){
     // STATICALLY 
     
     node n1(1);
     node *head = &n1;
     node n2(2);
     node n3(5);
     node n4(6);
     node n5(3);

     n1.next = &n2;
     n2.next = &n3;
     n3.next = &n4;
     n4.next = &n5;

     print(head);
     print(head);  // print function ko do baar call krne pr kya hoga ? socho !!
                  // kyuki humne head paas kiya lekin funciton me jo head hai 
                  // vo ek temp variable hai jo udhar banega udhar hi lost ho jayega
                  // isiliye head ki value me koi change nahi aayega or 
                  // print do baar hoga , smje !

     // n1.next = &n2;
     // cout<<n1.data<<" "<<n2.data<<endl;
     // printing data with the help of head pinter 
     // cout<<head->data;
     // cout<<head->next->data;


     // DYNAMICALLY

     // node *n3 = new node(10);
     // node *n4 = new node(20);
     // node *head = n3;
     // n3->next = n4;




return 0;
}