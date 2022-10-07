// CPP program for implementation of efficient
// approach to find length of last word
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

 int countSegments(string s) {
        int i = 0;
        int j = 0;
        int cnt = 0;
        for(; i < s.size(); i++){
            if(s[i]==' '){
                cout<<"enter if : "<<endl;
                cnt++;
                j=i+1;
            }
        }
        cout<<"i : "<<i<<endl;
        if(i==s.size()){
            cnt++;
        }
        return cnt;
    }
int main()
{
    cout<<countSegments("hello my name is");
	return 0;
}

// This code is contributed by rahulkumawat2107
