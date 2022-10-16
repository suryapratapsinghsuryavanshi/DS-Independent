// Linear Search in C
// Linear Search works on even unsorted array but uses O(n) time.

#include <stdio.h>

int search(int array[], int n, int x) {
 
  for (int i = 0; i < n; i++)
  {
    if (array[i] == x)
      return i;
  }
  return -1;
}

int main() {
  int array[] = {2, 4, 0, 1, 9};
  int x = 1;  //Number to find
  int n = 5;

  int result = search(array, n, x);

  (result == -1) ? printf("Element not found") : printf("Element found at index: %d", result);
}
