/*********************************************|
|         This is me Tanmoy Deb.......        |
|*********************************************/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    for (int moves = 1; moves <= 10; moves++)
    {
        if (moves % 2 == 1)
        {
            if ((n + 1) % 3 == 0)
            {
                n = n + 1;
            }
            else if ((n - 1) % 3 == 0)
            {
                n = n - 1;
            }
            else
            {
                n = n + 1;
            }
            if(n % 3 == 0)
            {
                cout << "First" << endl;
                return;
            }
        }
        else
        {
            if ((n + 1) % 3 == 0)
            {
                n = n + 1;
            }
            else if ((n - 1) % 3 == 0)
            {
                n = n - 1;
            }
            else
            {
                n = n + 1;
            }
        }
    }
    cout << "Second" << endl;
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