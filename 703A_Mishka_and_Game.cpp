#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int xx = 0, yy = 0;
    while (n--)
    {
        int x, y;
        cin >> x >> y;

        if (x > y)
            xx++;
        else if (x < y)
            yy++;
    }
    if (xx > yy)
    {
        cout << "Mishka" << endl;
    }
    else if (xx < yy)
    {
        cout << "Chris" << endl;
    }
    else
    {
        cout << "Friendship is magic!^^" << endl;
    }
    return 0;
}