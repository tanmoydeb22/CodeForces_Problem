#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a, b, c;
        cin>>a>>b>>c;

        int mx1 = max(a, b);
        int mx = max(mx1, c);
        
        if(a==0 && b==0 && c==0)
        {
            cout<<"1 "<<"1 "<<"1"<<endl;
        }
        else
        {
            if((a==b && (mx-a)==0) || (b==c && (mx-b)==0) || (a==c && (mx-a)==0))
            {
                cout<<mx-a+1<<" "<<mx-b+1<<" "<<mx-c+1<<endl;
            }
            else if((mx-a)==0)
            {
                cout<<mx-a<<" "<<mx-b+1<<" "<<mx-c+1<<endl;
            }
            else if((mx-b)==0)
            {
                cout<<mx-a+1<<" "<<mx-b<<" "<<mx-c+1<<endl;
            }
            else
            {
                cout<<mx-a+1<<" "<<mx-b+1<<" "<<mx-c<<endl;
            }
        }
    }
    return 0;
}