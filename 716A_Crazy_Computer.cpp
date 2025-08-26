/*********************************************|
|         This is me Tanmoy Deb.......        |
|*********************************************/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, c;
    cin>>n>>c;

    vector<int> v(n);
    
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if(v[i]-v[i-1] > c)
        {
            cnt = 0;
        }
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}