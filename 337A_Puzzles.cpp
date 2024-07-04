#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, mn = 0, ans;
    cin>>n>>m;
    int f[m];
    for (int i = 0; i < m; i++)
    {
        cin>>f[i];
    }
    sort(f, f+m);
    mn = f[n-1]-f[0];
    for (int i = n; i <= m; i++)
    {
        ans = abs(f[i-1]-f[i-n]);
        mn = min(mn, ans);
    }
    cout<<mn<<endl;
    return 0;
}