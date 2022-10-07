// subsequences of all strings //

#include<iostream>
#include<math.h>
using namespace std;
 
// int substring(string input , string output[]){
//      if(input.empty()){
//           output[0]="";
//           return 1;
//      }
//      string smallString = input.substr(1);
//      int smallOutput = substring(smallString,output);

//      for(int i = 0 ; i < smallOutput ; i++){
//           output[i+smallOutput] = input[0]+output[i];
//      }
//      return 2*smallOutput;
// }




void substring(string input , string output){
     if(input.length() == 0){
        cout<<output<<endl;
          return;
     }

     substring(input.substr(1),output);
     substring(input.substr(1),output+input[0]);
     
}

int main(){
     string input;
     cout<<"Enter the string"<<endl;
     cin>>input;
     string output = "";
     substring(input , output);
return 0;
}

