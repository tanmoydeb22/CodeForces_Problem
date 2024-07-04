#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a, b;
        cin>>a>>b;

        int mn = min(a, b);
        int mx = max(a, b);
        if(mn*2>mx || mn==mx)
        {
            cout<<pow(mn*2, 2)<<endl;
        }
        else
        {
            cout<<pow(mx, 2)<<endl;
        }
    }
    return 0;
}