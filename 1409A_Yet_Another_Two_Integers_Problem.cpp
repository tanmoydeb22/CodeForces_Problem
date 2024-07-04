#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int mn = min(a, b);
        int mx = max(a, b);
        if (mx - mn == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            int sub = mx - mn;
            if (sub % 10 == 0)
            {
                cout << sub / 10 << endl;
            }
            else
            {
                sub -= sub % 10;
                cout << sub / 10 + 1 << endl;
            }
        }
    }
    return 0;
}