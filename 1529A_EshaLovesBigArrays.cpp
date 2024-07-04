#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int avg = 0;
        sort(a, a + n);
        avg = a[0];
        int count = 1;
        for (int i = 1; i < n; i++)
        {
            if (avg == a[i])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        cout << n - count << endl;
    }
    return 0;
}