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

        int len = s.size();
        int pair = 0;

        for(int i = 0; i < len-1; i++)
        {
            if(s[i] == s[i+1])
            {
                 pair = 1;
                 break;
            }
        }
        if( len>1 && pair)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<len<<endl;
        }
        
    }
}