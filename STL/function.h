
void printVec(vector<int> &vec){   // vec jo receive hua vo basically ek copy bankar receive hua O(n) time me 
                                 // isiliye refrence dena si hota hai copy krne ka jo time hai vo save hoga

     cout << "size : " << vec.size()<<endl;
     // vec.size() --> O(1)
     for(int i = 0 ; i < vec.size();i++){
          cout<<vec[i]<<" ";
     }
     vec.push_back(255);
     cout<<endl;
}
// function - 2
void printVec2(vector<pair<int,int>> &vec){  

     cout << "size : " << vec.size()<<endl;
     for(int i = 0 ; i < vec.size();i++){
          cout<<vec[i].first<<" "<<vec[i].second<<endl;
     }
     cout<<endl;
}




