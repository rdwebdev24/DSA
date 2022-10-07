//  REVERSING THE LINKED LIST  //


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
     cout<<temp->data<<"->";
     temp = temp->next;
     }
     if(temp == NULL){
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

//  REVERSING FUNCTION  //

// node* reversal(node *head){
//      if(head == NULL || head->next == NULL){
//           return head;
//      }

//      node *ans  = reversal(head->next);

//      node *tail = ans;
//      while(temp->next != NULL){
//           temp = temp->next;
//      }
//      temp->next = head->next;
//      head->next = NULL;
//      return ans;
// }



// node* reversal(node *head){
//      if(head == NULL || head->next == NULL){
//           return head;
//      }

//      node *ans  = reversal(head->next);

//      node *tail = head->next;
//      // while(temp->next != NULL){
//      //      temp = temp->next;
//      // }
//      tail->next = head;
//      head->next = NULL;
//      return ans;
// }





/***** using class *****/

// class Pair{
//      public:
//           node *head;
//           node *tail;
// };

// Pair reversal_2(node *head){
//      if(head == NULL || head->next == NULL){
//           Pair ans;
//           ans.head = head;
//           ans.tail = head;
//           return ans;
//      }

//      Pair smallAns  = reversal_2(head->next);
//      smallAns.tail->next = head;
//      head->next = NULL;

//      Pair ans;
//      ans.head = smallAns.head;
//      ans.tail = head;
//      return ans;
// }

// node* reverse_better(node *head){
//      return reversal_2(head).head;
// }


/*****  ITERATIVE APPROCH  ******/

node* iterative_reverse(node* head){
     node* nxt;
     node* prev;
     node* curr;

     prev = NULL;
     curr = head;
     nxt = head->next;
     while(nxt!=NULL){
          nxt = curr->next;
          curr->next =  prev;

          
          prev = curr;
          curr = nxt;
     }
     return prev;
     
}




int main(){
     node *head = takeInput();
     print(head);

     // node* res = reversal(head);
     // print(res);

     // node* res = reverse_better(head);
     // print(res);


     node* res = iterative_reverse(head);
     print(res);


return 0;
}