// remove consecutive duplicates from the string 
// aabbbcdd  --> abcd

#include<iostream>
using namespace std;
 
int length(char str[]){
     if(str[0]=='\0'){
          return 0;
     }
     int smallLength = length(str+1);
     return smallLength+1;
}


void remove(char str[]){
     if(str[0]=='\0'){
          return;
     }
     if(str[0] != str[1]){
           remove(str+1);
     }else{
          int i = 1;
          for (; str[i] != '\0' ; i++){
               str[i-1] = str[i];
          }
          str[i-1] = str[i];
          remove(str);
     }
}

void print(char str[]){
     for(int i = 0 ; str[i] != '\0' ; i++){
          cout<<str[i];
     }
     cout<<endl;
}

int main(){
     char str[1000];
     cin>>str;
     int l = length(str);
     cout<<"The length of the string is : "<<l<<endl;
     print(str);
     remove(str);
     l = length(str);
     cout<<"The length of the string is : "<<l<<endl;
     print(str);

return 0;
}