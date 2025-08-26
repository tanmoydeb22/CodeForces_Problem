#include <bits/stdc++.h>
using namespace std;

void tanmoy()
{
    int n, c0, c1, h;
    cin >> n >> c0 >> c1 >> h;

    string s;
    cin >> s;

    int count_0 = 0, count_1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
         count_0++;
        else
         count_1++;
    }

    int cost1 = count_0 * c0 + count_1 * c1;
    int cost2 = c0 * n + count_1 * h;
    int cost3 = c1 * n + count_0 * h;
    
    int ans = min(cost1, min(cost2, cost3));
    cout<<ans<<endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        tanmoy();
    }
    return 0;
}