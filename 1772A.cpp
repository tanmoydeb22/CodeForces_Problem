#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;
        
        // ascii --> 0 = 48
        cout<<s[0]+s[2]-96<<endl;
    }
    return 0;
}