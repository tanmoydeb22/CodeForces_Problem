#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    vector<char> s1;

    for (int i = 0; i < n; i++)
    {
        bool isDuplicate = false;
        for (int j = 0; j < s1.size(); j++)
        {
            if(s[i] == s1[j])
            {
                isDuplicate = true;
                break;
            }
        }
        if(!isDuplicate)
        {
            s1.push_back(s[i]);
        }
    }
    int count = 0;
    for(auto it: s1)
    {
       count++;
    }
    cout<<n+count<<endl;
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