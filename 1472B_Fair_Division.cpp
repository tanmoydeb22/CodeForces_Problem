#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector<int> weights;
    int sum = 0;
    int one = 0, two = 0;

    for(int i = 0; i<n ; i++)
    {
        int num;
        cin>>num;
        weights.push_back(num);
        if(weights[i] == 1)
        {
            one++;
        }
        else
        {
            two++;
        }
        sum += weights[i];
    }
    
    if(sum % 2 != 0)
    {
        cout<<"NO"<<endl;
    }
    else if(one>1 || two % 2 == 0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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