#include<iostream>
using namespace std;
int median(int A[],int l,int r,int k)
{
    int ind = r-l+1;
    int index = rand() % ind;
    int i,j=0,m=0,n=0;
    int S1[10],S3[10],S2[1];
    for(i=l;i<=r;i++)
    {
        if(A[i]<A[index])
        {
            S1[j]=A[i];
            j++;
        }

        else if(A[i]==A[index])
        {
            S2[n]=A[i];
            n++;
        }
        else
        {
             S3[m]=A[i];
            m++;
        }  }
if(j>=k)
    {
         median(S1,0,j-1,k);
    }
    else if((j+n)>=k)
        return A[index];
    else
      median(S3,0,m-1,k-(j+n));
      
}

// Driver program to test above methods
int main()
{
	int arr[] = {7, 10, 4, 3, 20, 15, 8, 12,6};
	int n = sizeof(arr)/sizeof(arr[0]), k = 4;
	int element=median(arr, 0, n-1, k);
	cout << "K'th smallest element is "<<element;
	return 0;
}




