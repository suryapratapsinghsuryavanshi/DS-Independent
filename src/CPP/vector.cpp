#include <bits/stdc++.h>
using namespace std;

int main()
{
    // syntax of vector => vector <data type> name;
    vector<int> v;
    // inserting an element => we use push_back
    int a;
    cin >> a;       // a=5
    v.push_back(a); //  v = {5}
    // delting an element => we use pop_back
    v.pop_back() // v= {}
        // initialising all element with 0
        v[5] = { 0 } // v = { 0 , 0 , 0 , 0 , 0 }
    // find the length => we use v.size()
    int size = v.size(); // size = 5
    // printing a vector
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " "; // 0 0 0 0 0
    return 0;
}