#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin>>n>>k;

    int flag = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i] == k)
           flag = 1;
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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