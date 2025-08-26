/*********************************************|
|         This is me Tanmoy Deb.......        |
|*********************************************/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;

    char mn = '9';  
    for (char c : s)
    {
        if (c < mn)
        {
            mn = c;
        }
    }

    cout << mn << endl;

    // char mn = '9';
    // for (int i = 0; i < s.size(); i++)
    // {
    //     if(mn>s[i])
    //     {
    //         mn = s[i];
    //     }
    // }
    // cout<<mn<<endl;
  
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