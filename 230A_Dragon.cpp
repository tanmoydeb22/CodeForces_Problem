#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> x(n);

    for (int i = 0; i < n; i++)
    {
        cin >> x[i].first >> x[i].second;
    }
    sort(x.begin(), x.end());

    int c = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (s > x[i].first)
        {
            s += x[i].second;
            c++;
        }
        else
        {
            c--;
        }
    }
    if (c == n)
    {
        cout << "YES" << endl;
        ;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}