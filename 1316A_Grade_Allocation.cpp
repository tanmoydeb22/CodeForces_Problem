#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin>>n>>m;

    vector<int> v(n);
    for(int i = 0 ; i < n ; i++)
    {
        int scr;
        cin>>scr;
        v.push_back(scr);
    }
    int total = accumulate(v.begin(), v.end(), 0);
    cout<< min(total, m) <<endl;
}
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    } 
    return 0;
}