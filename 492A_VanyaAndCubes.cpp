#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int sum = 0;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            sum+=j;
        }
        if(sum>n)
        {
            break;
        }
        cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}
