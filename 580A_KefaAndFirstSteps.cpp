#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int mx = 1, max = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] >= a[i - 1])
        {
            mx++;
        }
        else
        {
            mx = 1;
        }
        if(max<mx)
        {
            max = mx;
        }
    }
    cout<<max<<endl;
    return 0;
}