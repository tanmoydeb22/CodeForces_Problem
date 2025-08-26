#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (abs(a[i] - a[j]) % k != 0)
            {
                count++;
            }
        }
        c = count;
        if (count == (n - 1))
        {
            cout << "YES" << endl;
            cout << i + 1 << endl;
            break;
        }
    }
    if(c!=(n-1))
    {
        cout << "NO" << endl;
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