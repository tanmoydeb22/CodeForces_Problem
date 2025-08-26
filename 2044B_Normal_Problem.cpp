#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    string s1="";

    for (int i = s.size()-1, j = 0; i >= 0, j<s.size(); i--, j++)
    {
        if(s[i]=='p')
        {
            s1 += 'q';
        }
        else if(s[i]=='q')
        {
            s1 += 'p';
        }
        else
        {
            s1 += 'w';
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        cout<<s1[i];
    }
    cout<<endl;
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