#include<bits/stdc++.h>
using namespace std;

int main()
{   int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int a[n];
        int sum = 0, e=0, o=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            sum+=a[i];
            if(a[i]%2==0)
            {
                e++;
            }
            if(a[i]%2!=0)
            {
                o++;
            }
        }
        if(sum%2!=0 || (e>0 && o>0))
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