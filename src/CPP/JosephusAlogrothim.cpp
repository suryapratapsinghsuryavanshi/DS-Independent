#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> ans;
    deque<int> d;

    for (int i = 1; i <= n; i++)
    {
        d.push_back(i);
    }

    int ct = 0;
    while (!d.empty())
    {
        ct++;

        if (ct % 2)
        {
            int x = d.front();
            d.pop_front();
            d.push_back(x);
        }
        else
        {
            cout << d.front() << " ";
            d.pop_front();
        }
    }
    cout << endl;

    return 0;
}