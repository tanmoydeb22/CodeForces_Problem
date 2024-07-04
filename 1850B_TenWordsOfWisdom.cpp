#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int mx = 0, cnt = 0;
        for(int i = 1 ; i<= n ; i++)
        {
            int x, y;
            cin>>x>>y;
            if(x<=10)
            {
                mx = max(mx, y);
                if(mx<=y)
                {
                    cnt = i;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}