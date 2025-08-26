#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);

    if( (arr[0]+arr[n-1]) % 2 == 0)
    {
       cout<<"0"<<endl;
    }
    else
    {
        int a = 0, b = 0;
        for (int j = n-1; j > 0; j--)
        {
            if( (arr[0]+arr[j]) % 2 != 0){
                a++;
            }
            else
            {
                break;
            }
        }
        for (int j = 0; j < n-1; j++)
        {
            if( (arr[j]+arr[n-1]) % 2 != 0){
                b++;
            }
            else
            {
                break;
            }
        }
        cout<<min(a, b)<<endl;
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