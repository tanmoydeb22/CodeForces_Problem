#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {

        long long int r, b, d;
        cin >> r >> b >> d;

        int x = max(r, b);
        int y = min(r, b);

        if (d == 0)
        {
            if (r == b)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
            continue;
        }

        else
        {
            long long int z = y * (d + 1);
            if (z >= x)
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