#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    int num_of_candies[n];
    for (int i = 0; i < n; i++)
    {
        cin>>num_of_candies[i];
    }
    sort(num_of_candies, num_of_candies+n);

    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        sum += num_of_candies[i]-num_of_candies[0];
    }
    cout<<sum<<endl;
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