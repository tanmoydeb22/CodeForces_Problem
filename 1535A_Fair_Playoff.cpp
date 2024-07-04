#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int s[4];
        for (int i = 0; i < 4; i++)
        {
            cin>>s[i];
        }
        int mx1 = max(s[0], s[1]);
        int mx2 = max(s[2], s[3]);
        int mn = min(mx1, mx2);
        sort(s, s+4); 
        if(mn==s[2])
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