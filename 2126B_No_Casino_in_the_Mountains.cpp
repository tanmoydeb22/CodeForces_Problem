/*********************************************|
|         This is me Tanmoy Deb.......        |
|*********************************************/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin>>n>>k;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int zero = 0;
        if(v[i] == 0)
        {
            // zero++;
            while( i != n)
            {
                if(v[i] == 0)
                {
                    zero++;
                }
                else
                {
                    break;
                }
                i++;
            }
            while( zero>=k)
            {
                zero = zero - k;
                ans++;
            }
        }
    }
    
    cout<<ans<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
    
    return 0;
}