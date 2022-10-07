// MERGE SORT ALGORITHMS //

#include <iostream>
using namespace std;

class node
{
public:
     int data;
     node *next;
     node(int data)
     {
          this->data = data;
          next = NULL;
     }
};

void print(node *head)
{
     node *temp = head;
     cout << "Printing the list" << endl;
     while (temp != NULL)
     {
          cout << temp->data << "->";
          temp = temp->next;
     }
     if (temp == NULL)
     {
          cout << "NULL";
     }
}

node *takeInput()
{
     cout << "Enter the elements" << endl;
     int data;
     cin >> data;
     node *head = NULL;
     node *tail = NULL;
     while (data != -1)
     {
          node *newNode = new node(data);

          if (head == NULL)
          {
               head = newNode;
               tail = newNode;
          }
          else
          {
               tail->next = newNode;
               tail = tail->next;
          }

          cin >> data;
     }
     return head;
}

node* findMid(node *head)
{
     node *slow = head;
     node *fast = head;

     while (fast != NULL && fast->next != NULL)
     {
          slow = slow->next;
          fast = fast->next->next;
     }
     return slow;
}

node* merge(node *head1, node *head2)
{
     node *p1 = head1;
     node *p2 = head2;
     node *dummynode = new node(-1);
     node *p3 = dummynode;

     while (p1 != NULL && p2 != NULL)
     {
          if (p1->data < p2->data)
          {
               p3->next = p1;
               p1 = p1->next;
          }
          else
          {
               p3->next = p2;
               p2 = p2->next;
          }
          p3 = p3->next;
     }
     while (p1 != NULL)
     {
          p3->next = p1;
          p1 = p1->next;
          p3 = p3->next;
     }
     while (p2 != NULL)
     {
          p3->next = p2;
          p2 = p2->next;
          p3 = p3->next;
     }
     return dummynode->next;
}

node* mergeSort(node *head)
{
     // base case
     if (head == NULL || head->next == NULL)
     {
          return head;
     }

     // break linked list into two halves , after finding the mid
     node *mid = findMid(head);
     node *left = head;
     node *right = mid->next;
     mid->next = NULL;

     // recursive sort
     left = mergeSort(left);
     right = mergeSort(right);

     // merge both left and right
     node *result = merge(left, right);

     return result;
}

int main()
{
     node *head = takeInput();
     print(head);

     head =  mergeSort(head);
     print(head);

     return 0;
}