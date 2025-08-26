/*********************************************|
|         This is me Tanmoy Deb.......        |
|*********************************************/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, j, k;
    cin >> n >> j >> k;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    if (k >= 2)
    {
        cout << "Yes\n";
    }
    else
    {
        int store = v[j - 1];
        sort(v.begin(), v.end());
        
        if (v[n - 1] == store)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}