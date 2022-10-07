//   parenthesis checker  //

#include<iostream>
#include<stack>
using namespace std;
 
bool isValid(string s){
     int len = s.size();
     cout<<len;
     bool ans = true;
     stack<char> stk;
    for(int i = 0 ; i<len ; i++){
     if(s[0]=="(" || s[i] == "{" || s[i] == "["){
          cout<<"smj ni aa raha"
     }
    }
}

int main(){
     string str = "[{()}]";
     if(isValid(str)){
          cout<<"The expression is valid"<<endl;
     }else{
          cout<<"The expression is not valid"<<endl;
     }
return 0;
}