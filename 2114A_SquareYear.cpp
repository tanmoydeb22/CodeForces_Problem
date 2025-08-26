/*********************************************|
|         This is me Tanmoy Deb.......        |
|*********************************************/


#include<bits/stdc++.h>
using namespace std;

void solve()
{
    float s;
    cin>>s;

    float root = sqrt(s);
    int intRoot = sqrt(s);  // take integer part

    if (intRoot * intRoot != s)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout<<"0"<<" "<<" "<<intRoot<<endl;
    }
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