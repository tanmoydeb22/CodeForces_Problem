#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        sort(s.begin(), s.end());
        int last = s[n-1], first = 97;
        cout<<last-first+1<<endl;

    }

    return 0;
}