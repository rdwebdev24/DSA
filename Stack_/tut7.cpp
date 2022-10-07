//   QUQUE   //

#include<iostream>
using namespace std;
// #include "queue.h"  // this file shoulc be place after the iostraeam file 
#include "queue2.h"  // this file shoulc be place after the iostraeam file 


int main(){
     QueueUsingArray<int> q(5);
     q.enquque(10);
     q.enquque(20);
     q.enquque(30);
     q.enquque(40);
     q.enquque(50);
     q.enquque(60);

     cout<<q.front()<<endl;
     cout<<q.dequeue()<<endl;
     cout<<q.dequeue()<<endl;
     cout<<q.dequeue()<<endl;

     cout<<q.getSize()<<endl;
     cout<<q.isEmpty()<<endl;
return 0;
}