#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    if(n%4!=0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        for (int i = 1; i <= n/2; i++)
        {
            cout<<i*2<<" ";
        }
        for (int i = 1; i < n/2; i++)
        {
            cout<<i*2-1<<" ";
        }
        cout<<(n/2)*2-1+(n/2)<<endl; 
    }
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