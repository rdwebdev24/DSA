#include<iostream>
// #include "stackUsingArray.cpp"
#include "stackUsingArray2.cpp"
using namespace std;
 
int main(){
       system("cls");
       stackUsingArray<int> s;
       s.push(10);
       s.push(20);
       s.push(30);
       s.push(40);
       s.push(50);
       cout<<s.middle()<<endl;
       s.deleteMid();
       cout<<s.pop()<<endl;
       cout<<s.pop()<<endl;
       cout<<s.pop()<<endl;
       cout<<s.pop()<<endl;
       cout<<s.pop()<<endl;
return 0;
}