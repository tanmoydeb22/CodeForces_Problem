#include <iostream>
using namespace std;

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string x1, x2;
        cin >> x1 >> x2;
        int a = x1.size(), b= x2.size(), ans = b;
        for (int i = 0; i < b; i++)
        {
            int cnt = i, k = i;
            for (int j = 0; j < a; j++)
            {
                if (x1[j] == x2[k])
                {
                    k++;
                    if (k == b)
                        break;
                }
            }
            ans = min(ans, cnt + b - k);
        }
        cout << ans + a << endl;
    }
    return 0;
}