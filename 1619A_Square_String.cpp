#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        if (n % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            int count = 0;
            for (int i = 0; i < n / 2; i++)
            {
                if (s[i] == s[n / 2 + i])
                {
                    count++;
                }
            }
            if (count == n / 2)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}