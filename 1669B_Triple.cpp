#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
void test()
{
    ll n;
    cin>>n;

    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);
    int c=0;
    for (ll i = 0; i < n; i++)
    {
        if(a[i]==a[i+1] && a[i]==a[i+2])
        {
            c = 1;
            cout<<a[i]<<endl;
            break;
        }
    }
    if(c==0)
    {
        cout<<"-1"<<endl;
    }
}


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        test();
    }
    return 0;
}