
#include <stdio.h>

void swap(int *first, int *second)
{
	int temp = *first;
	*first = *second;
	*second = temp;
}

void selectionSort(int arr[], int n)
{
	int i, j, min;

	
	for (i = 0; i < n-1; i++)
	{
		
		min = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min])
			min = j;

		
		if(min != i)
			swap(&arr[min], &arr[i]);
	}
}


void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}


int main()
{
	int arr[] = {64, 25, 1, 0, 11};
	int n = sizeof(arr)/sizeof(arr[0]);
	selectionSort(arr, n);
	printf("Sorted array: \n");
	printArray(arr, n);
	return 0;
}
