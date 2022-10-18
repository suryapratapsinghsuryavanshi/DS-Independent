    vector<int> ans;

     for(int j=0;j<n;j++){

         for(int k=0,t=j;k<=j,t>=0;k++,t--)

             ans.push_back(arr[k][t]);

     } 

     int j=n-1;

     for(int i=1;i<n;i++){

         for(int k=i,t=j;k<=j,t>=i;k++,t--)

             ans.push_back(arr[k][t]);

     }

     return ans;
