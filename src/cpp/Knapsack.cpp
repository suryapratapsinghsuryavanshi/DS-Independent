#include <bits/stdc++.h>
using namespace std;

struct items
{
    string item;
    int weight;
    int profit;
};

bool comp (items a,items b)
{
    float r1=(float)a.profit/(float)a.weight;
    float r2=(float)b.profit/(float)b.weight;
    return r1>r2;
}

void knapsack(items c[],int cap,int n)
{
    float arr[n];
    sort (c,c+n,comp);
    for (int i=0;i<n;i++)
    {
        arr[i]=0;
    }
    for (int i=0;i<n;i++)
    {
        if (c[i].weight<cap)
        {
            arr[i]+=c[i].weight;
            cap-=c[i].weight;
        }
        else
        {
            arr[i]+=cap;
            cap=0;
        }
        cout << c[i].item << "  "<<c[i].profit << "  " << c[i].weight << "  "
             << (float)arr[i] <<
    endl;
    }


}

int main ()
{
    items i[]={{"m6",10,20034},{"Galaxy M12",5,13800},{"g5",32,569000},{"Narzo s8",8,4859000},{"s10 holo",19,279300}};
    knapsack(i,40,5);
}
