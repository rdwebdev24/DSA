//  STRINGS  //

#include<iostream>
using namespace std;

int main(){
// string 
// string *s2 = new string;
// *s2 = "rohit";
// cout<<s2<<endl;
// cout<<*s2<<endl;

string s = "hero";
string s1;
s1 = "okok";
cout<<s1<<endl;

// input in string //
// string s3;
// cin>>s3;
// cout<<s3<<endl;

// getline method
string s4;
getline(cin , s4);
cout<<s4<<endl;
cout<<s4[3]<<endl;
string s5 = s4+s1;
cout<<"Concated string : "<<s5<<endl;
cout<<s5.size()<<endl;
cout<<s5.substr(3,2)<<endl;
cout<<s5.find("ro")<<endl;
return 0;

}