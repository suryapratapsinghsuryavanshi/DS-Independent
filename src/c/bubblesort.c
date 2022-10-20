#include <stdio.h>

int printarray(int *A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
    
}

void bubblesort(int *A , int n){
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Working on pass number %d \n", i+1);
        
        for (int j = 0; j <n-1-i; j++)
        {
            if (A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                isSorted =0;
            }
            
        }
        
    }
    
}

void bubblesortadaptive(int *A , int n){
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Working on pass number %d \n", i+1);
        isSorted = 1;
        for (int j = 0; j <n-1-i; j++)
        {
            if (A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                isSorted =0;
            }
            
        }
        if(isSorted){
            return;
        }
    }
    
}


int main()
{
    int n=6;
    int A[] = {97,67,78,45,123,69}; 
    printarray( A, n);
    printf("\n");
    bubblesort(A,n);
    printarray( A, n);
    return 0;
}