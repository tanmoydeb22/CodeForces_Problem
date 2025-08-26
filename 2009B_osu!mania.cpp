/*********************************************|
|         This is me Tanmoy Deb.......        |
|*********************************************/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<vector<char>> v(n+1, vector<char>(5));

    vector<int> arr;
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            cin>>v[i][j];
            if(v[i][j] == '#')
            {
               arr.push_back(j); 
            }
        }
    }
    for (int i = arr.size()-1; i >= 0 ; i--)
    {
        cout<<arr[i]<<" ";
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