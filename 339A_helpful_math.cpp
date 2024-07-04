#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;

    sort(s.begin(), s.end());
    for(int i=s.size()/2 ; i<s.size() ; i++)
    {
        cout<<s[i];
        if((s.size()-i-1)>=1)
        {
            cout<<"+";
        }
    }
    return 0;
}