// MAPS //
#include<iostream>
#include<map>
#include<string>
#include <unordered_map>
using namespace std;
 
void print(map<int ,string> &m){
     for(auto &pr:m){
          cout<<pr.first<<" "<<pr.second<<endl; 
     }
     // n log(n) ka loop hai kyuki access krne me bhi log(n) time 
     // lagta hai or for loop n times bar chalta hai to totla 
     // nlog(n)
}

int main(){
     system("cls");
     // map<int , string> m;
     // m[1] = "rohit";
     // m[2] = "Mohit";
     // m[3] = "Raghav";
     // m.insert({4,"mummy"});
     // map<int , string> :: iterator it;
     // for(it = m.begin(); it!=m.end();++it){
     //      cout<<it->first<<" "<<it->second<<endl;
     // }

     // time complexity of adding a new element in map is log(n)

     // m.erase(2);
     // auto it2 = m.find(3);  // return an iterator 
     // cout<<(*it2).second;
     // m.clear();



     // map<int, int> m;
     // m.insert(pair<int,int>(1,2));
     // m.insert(pair<int,int>(5,6));
     // m.insert(pair<int,int>(3,4));
     // m[6] = 15;

     // cout<<m[1]<<" ";
     // cout<<m[3]<<" ";
     // cout<<m[6]<<" ";
     // cout<<m[5]<<" ";
     // m.erase(3);
     // map<int , int> ::iterator it;
     // for(it=m.begin(); it!=m.end(); it++){
     //      cout<<it->first<<" "<<it->second<<endl;
     // }

     // cout<<m.count(99);




 
return 0;
}