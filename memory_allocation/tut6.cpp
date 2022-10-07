/***** CONSTANT VARIABLES *****/

#include<iostream>
using namespace std;
 
int main(){
//     const int i = 10;
//     i = 20;           // !BEWARE OF CONSTANT

//     const int j;
//      j = 10;           // should be initialed at the time of declaration 
//     cout<<i<endl;


     // constant refrence from a non constant int
     // int j = 10;
     // const int k = j;
     // k++;              // 'k' ke through jaake change nahi kar sakta path constant kr diya hai na 
     // j++;

     // two ways to declaring 
     // const int i = 10;
     // int const i2 = 20;



//     const int i = 10;
     // int *ptr = &i;     // constant int ko normal pointer me nahi likh skte 
                           // kyuki constant ko change nahi kr skte to pointer ko 
                           // promise krna hoga ki vo bhi change nahi krega isiliye 
     // int const *ptr = &i;  // ye valid hai


     // int j = 10;
     // const int* ptr = &j;    // allowed hai ptr change nahi kr skta par j to kar skta hai na 


     // int i = 10;
     // int j = 20;
     // int const *p = &i;    // is line ka matlab hai ki p jo hai ki
                           // pointing towards a constant integer p khud to change ho skta hai na
     // p = &j;

     // int * const p2 = &i   // iska matlab hai ki p is a constant pointer pointing toward an interger;

     // int const * const p3 = &i;    // constant pointer to a constant interger 
     
return 0;
}