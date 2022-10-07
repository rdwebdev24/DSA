vector<vector<int>> transpose(vector<vector<int>>& arr) {
     //    for(int i=0; i<arr.size(); i++){
     //      for(int j=i; j<arr[i].size(); j++){
     //           int temp = arr[i][j];
     //           arr[i][j] = arr[j][i];
     //           arr[j][i] = temp;
     //      }
     //    }

     int row=arr.size();
     int col = arr[0].size();
     cout<<"row : "<<row<<endl;
     cout<<"col : "<<col<<endl;
     vector<vector<int>> vec(col);
     
     for(int i=0; i<col; i++){
          vec[i].resize(row);
          for(int j=0; j<row; j++){
               vec[i][j] = arr[j][i];
          }
     }
        
        return vec;
}



 vector<vector<int>> shiftGrid(vector<vector<int>>& arr, int k) {
        vector<int> vec;
        for(int i=0; i<arr.size(); i++){
            for(int j=0; j<arr[i].size(); j++){
                vec.push_back(arr[i][j]);
            }
        }
        for(int i=0; i<vec.size(); i++){
          cout<<vec[i]<<" ";
        }
        cout<<endl;
        while(k>0){
            for(int i=vec.size()-2; i>=0;i--){
            int temp=vec[i+1];
            vec[i+1] = vec[i];
            vec[i] = temp;
        }
            k--;
        }
        for(int i=0; i<vec.size(); i++){
          cout<<vec[i]<<" ";
        }
        cout<<endl;
        int f=0;
        for(int i=0; i<arr.size(); i++){
            for(int j=0; j<arr[i].size(); j++){
                arr[i][j] = vec[f];
                f++;
            }
        }
        for(int i=0; i<arr.size(); i++){
            for(int j=0; j<arr[i].size(); j++){
              cout<<arr[i][j]<<" ";
            }
        }
        
        return arr;
    }



 vector<vector<int>> construct2DArray(vector<int>& arr, int m, int n) {
        vector<vector<int>> vec(m*n);
        if(m*n<arr.size()){
            return vec;
        }
        int k=0;
        for(int i=0; i<m; i++){
            vec[i].resize(m);
            for(int j=0; j<n; j++){
                vec[i][j] = arr[k];
                k++;
            }
        }
        for(int i=0; i<m; i++){
            vec[i].resize(m);
            for(int j=0; j<n; j++){
               cout<<vec[i][j]<<" ";
            }
        }
        return vec;
    }


  vector<vector<int>> matrixReshape(vector<vector<int>>& arr, int r, int c) {
        if(r*c!=arr.size()*arr[0].size()){
            return arr;
        }
        vector<int> vec;
        for(int i=0; i<arr.size(); i++){
            for(int j=0; j<arr[i].size(); j++){
                vec.push_back(arr[i][j]);
            }
        }

        int k=0;
        for(int i=0; i<r; i++){
          vector<int> vec2;
           cout<<"for1"<<endl;
            for(int j=0; j<c; j++){
               vec2.push_back(vec[k]);
               cout<<"for2"<<endl;
               k++;
            }
                arr.push_back(vec2);
        }
        for(int i=0; i<c; i++){
            for(int j=0; j<r; j++){
               cout<<arr[i][j]<<endl;
            }
        }
        
        return arr;
    }



void display(vector<int> arr){
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


	void rearrange(int arr[], int n) {
	    vector<int> vecp;
	    vector<int> vecn;
	    
	    for(int i=0; i<n; i++){
	        if(arr[i]>=0){
	            vecp.push_back(arr[i]);
	        }else{
	            vecn.push_back(arr[i]);
	        }
	    }
        display(vecp);
        display(vecn);
        int i=0,j=0,k=0;
        while(i!=vecp.size() and j!= vecn.size()){
            if(k%2==0){
                arr[k] = vecp[i];
                i++;
            }else{
                 arr[k] = vecn[j];
                 j++;
            }
            k++;
        }
        cout<<"i : "<<i<<endl;
        cout<<"j : "<<j<<endl;
        cout<<"k : "<<k<<endl;
        while(i<vecp.size()){
            arr[k] = vecp[i];
            i++;
        }
        while(j<vecn.size()){
            arr[k] = vecp[j];
            j++;
        }

        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
	}