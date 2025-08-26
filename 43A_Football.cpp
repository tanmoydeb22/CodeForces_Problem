#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<string> v(n);
    for(auto &it : v) cin>>it;
    sort(v.begin(), v.end());

    int first = 0, second = 0;
    for (int i = 0; i < n; i++)
    {
        if(v[0] == v[i])
        {
            first++;
        }
        else
        {
            second++;
        }
    }
    if(first>second) 
    {
        cout<<v[0]<<endl;
    }
    else 
    {
        cout<<v[n-1]<<endl;
    }
    
    return 0;
}