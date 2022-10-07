#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
#include "tut11Function.h"

string rremove(string s){
        int n;
        for(int i=0; i<s.size();i++){
            if(s[i]==s[i+1])
            n=i;
            else
            return s;
            }
     for(int j=n; j<s.size();j++){
         s[j]=s[j+2];
         
     }
     s=s.substr(0,s.size()-2);
     cout<<s;
     rremove(s);
        
       
    }
int main(){
     string s="aabaacca";
     rremove(s);
     // system("cls");
     // fun1(12);
     // printN_to_1(50);
     // print1_to_N(5);
     // int s = 1234567891;
     // cout<<sumofdigit(s);

     // int k=2;
     // int n=5;
     // int arr[n] = {5,5,6,1,2};
     // cout<<firstIdx(arr,k,n);

     // int n=6;
     // int arr[n] = {5,6,5,4,6,6};
     // cout<<allIndex(arr,n,40);

     // char str[100];
     // cin>>str;

     // int l = length(str);
     // cout<<"length : "<<l;

     // char arr[100];
     // cout<<"enter the char array : "<<endl;
     // cin>>arr;
     // char x = 'a';
     // removeLetter(arr,x);
     // cout<<length(arr);
     // for(int i=0 ;arr[i]!='\0'; i++){
     //      cout<<arr[i];
     // }



return 0;
}