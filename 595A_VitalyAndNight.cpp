/*********************************************|
|         This is me Tanmoy Deb.......        |
|*********************************************/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> v(n, vector<int>(2*m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*m; j++)
        {
            cin>>v[i][j];
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*m; j += 2)
        {
            if (v[i][j] == 1 || v[i][j + 1] == 1)
            {
                count++;
            }
        }
    }
    cout << count << endl;
}

int main()
{
    solve();
    return 0;
}