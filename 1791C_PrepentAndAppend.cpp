#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int len = n-1;
    if (n == 1)
    {
        cout << "1" << endl;
    }
    else
    {
        for (int i = 0; i <= len; i++)
        {
            if(s[i] != s[len])
            {
                n-=2;
            }
            else
            {
                break;
            }
            len--;
        }
        cout<<n<<endl;
    }
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