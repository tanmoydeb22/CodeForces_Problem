#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main()
{
    ll n;
    cin>>n;

    ll a[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int cnt=1;
    int ans, mx = 1;
    for(int i = 1; i < n; i++)
    {
        if(a[i]>a[i-1])
        {
            cnt++;
            ans = cnt;
            mx = max(ans, mx);
        }
        else
        {    
            cnt = 1;
        }
    }
    cout<<mx<<endl;
    
    return 0;
}