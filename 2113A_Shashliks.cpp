#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int k, a, b, x, y;
    cin >> k >> a >> b >> x >> y;

    if (k < a && k < b)
    {
        cout << "0" << endl;
    }
    else if (k > a && k < b)
    {
        int cnt = 0;
        while (k >= a)
        {
            k -= x;
            cnt++;
        }
        cout << cnt << endl;
    }
    else if (k < a && k > b)
    {
        int cnt = 0;
        while (k >= b)
        {
            k -= y;
            cnt++;
        }
        cout << cnt << endl;
    }
    else
    {
        if (x == y)
        {
            if (a <= b)
            {
                int cnt = 0;
                while (k >= a)
                {
                    k -= x;
                    cnt++;
                }
                cout << cnt << endl;
                return;
            }
            else
            {
                int cnt = 0;
                while (k >= b)
                {
                    k -= y;
                    cnt++;
                }
                cout << cnt << endl;
                return;
            }
        }
        else if (x < y)
        {
            int cnt = 0;
            while (k >= a)
            {
                k -= x;
                cnt++;
            }
            while (k >= b)
            {
                k -= y;
                cnt++;
            }
            cout << cnt << endl;
        }
        else
        {
            int cnt = 0;
            while (k >= b)
            {
                k -= y;
                cnt++;
            }
            while (k >= a)
            {
                k -= x;
                cnt++;
            }
            cout << cnt << endl;
        }
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