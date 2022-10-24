#include <bits/stdc++.h>
using namespace std;

int a[] = { 1, 2, 5, 10, 20, 50, 100, 500, 1000 };
int n = sizeof(a)/sizeof(a[0]);
void coinage (int val)
{
    vector<int>ans;
    sort(a, a+n, greater<int>()); 
    for (int i=0;i<=n;i++)
    {
        while (a[i]<=val)
        {
            val-=a[i];
            ans.push_back(a[i]);
        }
    }
    for (int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
        cout<<endl;
    }

}

int main()
{
    
    coinage(93);
}
