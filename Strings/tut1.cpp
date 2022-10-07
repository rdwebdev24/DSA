#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

#include "function1.h"
int total_words(string str){
   int count = 0;
   int temp = 0;
   int i=0;
   int space = 0;
   while (i<str.size()){
      if (str[i] == ' '){
         temp = 0;
         space++;
      }
      else if(temp == 0){
         temp = 1;
         count++;
      }
      ++i;
   }
   cout<<"space is : "<<space<<endl;
   cout<<"count is : "<<count<<endl;
   int newSpace = space/(count-1);
   int remainspace = space%(count-1);
   cout<<"newSpace is : "<<newSpace<<endl;
   cout<<"remainspace is : "<<remainspace<<endl;

   
   return count;
}
int main()
{
      string str = " practice   makes   perfect";
      total_words(str);
     // FUNCTION 1,2 //
     // string s;
     // cout<<"Enter the string : "<<endl;
     // getline(cin,s);
     // sort(s.begin(), s.end());

     // cout<<CheckPalindrome(s);
     // for(int i = 0; i<s.length(); i++){
     //      cout<<s[i];
     // }

     //  FUNCTION - 3 //
     // string s,t;
     // cout<<"Enter the string1 : "<<endl;
     // cin>>s;
     // cout<<"Enter the string2 : "<<endl;
     // cin>>t;
     // cout<<Anagram(s,t);

     // FUNCTION - 4 //
     // string s;
     // cout<<"Enter the string"<<endl;
     // getline(cin,s);
     // PrintDuplicates(s);
     
     return 0;
}