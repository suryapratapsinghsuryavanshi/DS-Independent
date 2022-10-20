 vector<int> duplicates(int arr[], int n) {
        // code here
        bool f=true;
        vector<int>v;
        sort(arr,arr+n);
        int j=0;
        for(int i=1;i<n;i++){
            if(arr[j]==arr[i]){
                     f=false;
                 v.push_back(arr[i]);
            ;
                while(arr[j]==arr[i+1]){
                    i++;
                }
           
               
            }
             if(arr[j]!=arr[i]){
                j=i;
            }
        }
        if(f){
            v.push_back(-1);
        }
        return v;
    }
