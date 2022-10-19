#include<iostream>

using namespace std;

int partition(int A[], int l, int r) {
    int x = A[r];
    int i = l-1;

    for(int j = l; j < r; ++j) {
        if(A[j] <= x) {
            swap(A[++i], A[j]);
        }
    }
    swap(A[++i], A[r]);
    return i;
}

void quicksort(int A[], int l, int r) {
    if(l < r) {
        int q = partition(A, l, r);
        quicksort(A, l, q-1);
        quicksort(A, q+1, r);
    }
}

int main() {
    int a[] = {7,1,22,3,2,12,27,31,6};
    for(int i = 0; i < 9; ++i) {
        cout << a[i] << ' ';
    }
    cout << endl;
    quicksort(a, 0, 8);
    for(int i = 0; i < 9; ++i) {
        cout << a[i] << ' ';
    }

    return 0;
}
