#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        long long int A, B;
        cin >> A >> B;
        long long int x, y, z;

        if (B == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        else if (B == 2)
        {
            cout << "YES" << endl;
            if (A == 1)
            {
                cout << 3 << " " << 1 << " " << 4 << endl;
            }
            else
            {
                B *= A;
                z = A * B;
                B--;
                x = A * B;
                y = A;
                cout << x << " " << y << " " << z << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
            z = A * B;
            B--;
            x = A * B;
            y = A;
            cout << x << " " << y << " " << z << endl;
        }
    }
    return 0;
}