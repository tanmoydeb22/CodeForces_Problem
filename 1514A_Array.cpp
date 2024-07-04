#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int ans = 0;
        int x;
        for (int j = 0; j < n; j++)
        {
            cin>>x;
            int a = sqrt(x);
            if(a*a != x)
            {
                ans = 1;
            }
        }
        if(ans==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}