 /*****  REFERENCE AND PASS BY REFERENCE ******/

#include<iostream>

using namespace std;
 
int main(){
     

     // int i = 10;
     // int j = i;
     // i++;
     // cout<<j<<endl;    // no change on j as there 'j' is a copy of
     // of 'i' both i and j has different memory location

     // int i = 10;
     // int& j = i;
     // i++;
     // int k = 50;
     // j = k;
     // cout<<j<<endl;   // now 'j' dosent have another  memory location
     // as it is just referencing to i

     //  int i;
     //  i = 10;
     // int& j;
     // j = i;   // this is not acceptable as reference variable should be initialised when it declare
     // i++;
     // int k = 50;
     // j = k;
     // cout<<j<<endl;

     // int i = 10;
     // increament(i);
     // cout << i << endl;
return 0;
}