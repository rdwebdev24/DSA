// array of string //

// finding the length of the string 
// and removing the particular character from the string

#include<iostream>
using namespace std;
 
int length(char str[]){
     if(str[0]=='\0'){
          return 0;
     }
     int smallLength = length(str+1);
     return smallLength+1;
}

void removex(char str[] , char c){
     if(str[0]=='\0'){
          return;
     }
     if(str[0] != c){
          removex(str+1 , c);
     }else{
          int i = 1;
          for (; str[i] != '\0' ; i++){
               str[i-1] = str[i];
          }
          str[i-1] = str[i];
          removex(str , c);
     }
}

int main(){
     char str[1000];
     cin>>str;
     int l = length(str );
     cout<<"The length of the string is : "<<l<<endl;
     removex(str , 'a');
     l = length(str);
     cout<<"The length of the string is : "<<l<<endl;
return 0;
}



