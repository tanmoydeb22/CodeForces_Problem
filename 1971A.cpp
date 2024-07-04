#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int x[2];
        cin>>x[0]>>x[1];

        sort(x, x+2);
        cout<<x[0]<<" "<<x[1]<<endl;
    }
    return 0;
}