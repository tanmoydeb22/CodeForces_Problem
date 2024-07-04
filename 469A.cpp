#include <iostream>
using namespace std;

int main()
{
    int n, p, q;
    cin >> n;

    cin >> p;
    int x[p];
    for (int i = 0; i < p; i++)
    {
        cin >> x[i];
    }

    cin >> q;
    int y[q];
    for (int i = 0; i < q; i++)
    {
        cin >> y[i];
    }

    int c = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            if (x[j] == i)
            {
                c = 1;
                break;
            }
            else
            {
                c = 0;
            }
        }
        if (c == 0)
        {
            for (int j = 0; j < q; j++)
            {
                if (y[j] == i)
                {
                    c = 1;
                    break;
                }
                else
                {
                    c = 0;
                }
            }
        }
        if (c == 0)
        {
            c == 0;
            break;
        }
    }
    if (c == 1)
    {
        cout << "I become the guy" << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}