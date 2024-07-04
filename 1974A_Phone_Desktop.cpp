#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        ll ans = y / 2;
        x -= ans * 7;
        if (y % 2)
        {
            ++ans;
            x -= 11;
        }
        if (x > 0)
        {
            ans += (x + 14) / 15;
        }
        cout << ans << endl;
    }
    return 0;
}