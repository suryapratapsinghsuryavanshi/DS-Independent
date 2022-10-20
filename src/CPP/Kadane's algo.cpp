 long long maxSubarraySum(int arr[], int n){
        int max_so=INT_MIN;
        int max_up=0;
        for(int i=0;i<n;i++){
            max_up+=arr[i];
            if(max_so<max_up){
                max_so=max_up;
            }
            if(max_up<0){
                max_up=0;
            }
        }
        return max_so;
        // Your code here
        
    }
