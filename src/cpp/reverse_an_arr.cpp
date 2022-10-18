#include<bits/stdc++.h>
using namespace std;
// function to reverse an array
void reverseArray(int ar[], int st, int en){
    if(st>=en){
        return;
    }
    int temp = ar[st];
    ar[st] = ar[en];
    ar[en] = temp;
    reverseArray(ar, st + 1, en - 1);

    
}
// to print the array
void printArray(int ar[], int n){
        for(int i = 0; i<n; i++){
            cout<<ar[i]<<" ";
            cout<<endl;
        }
    }
// main code
int main(){
    int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int ar[n];     
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> ar[i];
   }
   reverseArray(ar,0,5);
   cout<<"reversed array is";
//    to print reversed array
printArray(ar,n);
return 0;

}