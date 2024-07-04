#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int x[2], y[2];
        for (int i = 0; i < 2; i++)
        {
            cin>>x[i]>>y[i];
        }
        if(x[0]>y[0])
        {
            if(x[1]>y[1])
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        if(x[0]<y[0])
        {
            if(x[1]>y[1])
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}