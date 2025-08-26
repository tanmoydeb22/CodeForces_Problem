#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int num[36] = {1, 11, 111, 1111, 2, 22, 222, 2222, 3, 33, 333, 3333, 4, 44, 444, 4444, 5, 55, 555, 5555, 6, 66, 666, 6666, 7, 77, 777, 7777, 8, 88, 888, 8888, 9, 99, 999, 9999};

    int cnt = 1;
    for (int i = 0; i < 36; i++)
    {
        if (num[i] != n)
        {
            cnt++;
        }
        else
        {
            break;
        }
    }

    int c = 0;
    int ii = 1;
    for (int i = 0; i < cnt; i++)
    {
        if ((ii % 2 == 0) && (ii % 4 != 0))
        {
            c += 2;
        }
        else if ((ii % 3 == 0) && (ii % 4 != 0) && (ii % 2 != 0))
        {
            c += 3;
        }
        else if ((ii % 4 == 0) && (ii % 3 != 0))
        {
            c += 4;
        }
        else
        {
            c++;
        }
        if (ii % 4 == 0)
        {
            ii = 0;
        }
        ii++;
    }
    cout<< c << endl;
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