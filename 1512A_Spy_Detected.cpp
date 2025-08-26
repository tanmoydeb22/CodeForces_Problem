#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int flag = 0, ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (arr[i] != arr[j])
            {
                flag = 1;
                if (arr[j] == arr[j + 1])
                {
                    ans = j;
                }
                else
                {
                    ans = j + 1;
                }
                break;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}