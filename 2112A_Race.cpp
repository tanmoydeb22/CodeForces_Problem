/*********************************************|
|         This is me Tanmoy Deb.......        |
|*********************************************/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, x, y;
    cin >> a >> x >> y;

    if ((a > x && a > y) || (a < x && a < y))
    {
        if (abs(a - x) >= 1 && abs(a - y) >= 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
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