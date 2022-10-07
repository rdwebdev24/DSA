// iterators //
// basically it is like a pointer 
// v.begin() --> point to a srarting element 
// v.end() --> point to end element 

#include<iostream>
#include<vector>
using namespace std;
 
int main(){
     // vector<int> v = {1,2,3,4,5};
     // vector<int> ::iterator it = v.begin();
     // for(it = v.begin(); it != v.end(); ++it){
     //      cout<<(*it)<<" ";
     // }

     // vector<pair<int , int>> v = {{1,2},{3,4},{5,6}};
     // vector<pair<int,int>> :: iterator it;
     // for(it = v.begin(); it!= v.end(); it++){
     //      cout<<it->first<<" "<<(*it).second<<endl;
     // }

     // SORTCUT FOR IETRATORS //
     // vector<int> v = {1,2,3,4,5};
     // for(int value : v){
     //      cout<<value<<" ";
     // }

     //   vector<pair<int , int>> p = {{1,2},{3,4},{5,6}};
     // for(pair<int , int > value : p){
     //      cout<<value.first<<" "<<value.second<<endl;
     // }

     // AUTO KEYWORD AUTOMATICALLY ASSUME VALUES //

     // vector<pair<int , int>> v = {{1,2},{3,4},{5,6}};
     // for(auto it = v.begin(); it!= v.end(); it++){
     //      cout<<it->first<<" "<<(*it).second<<endl;
     // }
return 0;

}