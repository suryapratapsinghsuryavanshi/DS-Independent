#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    { vector<int>v;
        int sum=0;
        int l=0,h=0;
        while(sum!=s &&(h<n||l<n)){
            if(sum<s ){
                sum+=arr[h];
                h++;
            }
            if(sum>s){
                sum-=arr[l];
                l++;
            }
           
        }
        if(h>n||l+1>n){
     v.push_back(-1);
                return v;}
        v.push_back(l+1);
        v.push_back(h);
       
        
       
        return v;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
