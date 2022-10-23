#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
 
 int getMax(int arr[], int n)
{
    int i;
     
    // Initialize maximum element
    int max = arr[0];
 
    // Traverse array elements
    // from second and compare
    // every element with current max
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
 
    return max;
}

void countingSort(int array[], int size, int place) 
 {
 const int max = 10;
  int output[size]; int count[max]; 
 for (int i = 0; i < max; ++i)
count[i] = 0; // Calculate count of elements
  for (int i = 0; i < size; i++)
  count[(array[i] / place) % 10]++; 
for (int i = 1; i < max; i++)
 count[i] += count[i - 1];
for (int i = size - 1; i >= 0; i--)
 { output[count[(array[i] / place) % 10] - 1] = array[i];
 count[(array[i] / place) % 10]--;
 }
 for (int i = 0; i < size; i++)
 array[i] = output[i]; }

void radixsort(int array[], int size)
   { // Get maximum element 
        int max = getMax(array, size); 
  // Apply counting sort to sort elements based on place value. 
    for (int place = 1; max / place > 0; place *= 10)
           countingSort(array, size, place);
 }


/* Driver program to test above function */
int main()
{
    int arr[]= { 897, 565, 56, 1234, 5, 3434 };
    int n = sizeof(arr) / sizeof(arr[0]);
    radixsort(arr, n);
 
    cout << "Sorted array is \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
