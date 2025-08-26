#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    int sum = 1;
    int num = 1;

    for (int i = 2; i < 30; i++)
    {
        num *= 2;
        sum += num;
        if (n % sum == 0) 
        {
            cout << n / sum << endl;
            break;
        }
        
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