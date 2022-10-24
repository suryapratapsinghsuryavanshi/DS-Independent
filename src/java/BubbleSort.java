// Bubble sort in Java

import java.util.*;

class Main {

static void bubbleSort(int array[],int size) {
    for (int i = 0; i < size- 1 ; i++)    {
      for (int j = 0; j < size - i- 1 ; j++)     {
        if (array[j] > array[j + 1]) {
            // swapping a[j+1] and a[j]
          int temp = array[j];
          array[j] = array[j + 1];
          array[j + 1] = temp;
        }
      }
    }
  }
  static void printArray(int array[],int n)
    {
        for (int i = 0; i < n; i++)
            System.out.print(array[i] + " "); 

        System.out.println();
    }

  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);  
    int n;
    System.out.println("Enter the size of list:");
    n=sc.nextInt();
    int[] list = new int[n];
    System.out.println("Enter the elements to sort: ");
    for(int i=0;i<n;i++)      {
        list[i]=sc.nextInt();
    }
    System.out.println("Elements in sorted order:");
    bubbleSort(list,n);
    printArray(list,n);
  }
}
