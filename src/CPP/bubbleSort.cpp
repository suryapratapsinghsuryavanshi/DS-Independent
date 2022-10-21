#include <iostream>
using namespace std;

// Code written by Sachin Shah 
// Let's connect on GitHub - @imsachinshah
// Twitter - "@imsachinshah0"

void printArray(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << "\n";
}

void bubbleSort(int a[], int n)
{

    int i, j;
    int temp;

    // Loop for Number of passes
    for (i = 0; i < n - 1; i++)
    {
        cout << "Working on pass number: " << i + 1 << endl;

        // Loop for Swapping
        for (j = 0; j < n - 1 - i; j++)
        {

            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void bubbleSortAdaptive(int a[], int n)
{

    int i, j;
    int temp;
    bool isSorted = 0;

    // Loop for Number of passes
    for (i = 0; i < n - 1; i++)
    {

        cout << "Working on pass number: " << i + 1 << endl;

        isSorted = 1;

        // Loop for Swapping
        for (j = 0; j < n - 1 - i; j++)
        {

            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                isSorted = 0;
            }
        }
        
        if (isSorted)
        {
            return;
        }
    }
}

int main()
{

    int a[] = {2, 5, 20, 25, 30, 37};
    int n = 6;

    printArray(a, n); // Before Sorting

    bubbleSortAdaptive(a, n);

    printArray(a, n); // Before Sorting

    return 0;
}