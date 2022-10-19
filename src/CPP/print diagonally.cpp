  	

	vector<int> downwardDigonal(int N, vector<vector<int>> A)
	{int n=A.size();
	    vector<int>v;
	   for(int i=0;i<n;i++){
	       int a=i,j=1;
	       
	        for(int j=0;j<=i,a>=0;j++,a--){
	           v.push_back(A[j][a]);
	       }
	    if(i==n-1){a=n-1;
	    while(j<n){
	           int k=a;
	           for(int p=j;p<=a ,k>=j;p++,k--){
	               v.push_back(A[p][k]);
	           }
	           j++;
	       }
	      
	       
	   }}
	   return v;
	}

