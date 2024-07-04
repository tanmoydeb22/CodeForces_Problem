#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Y, W;
    
    cin >> Y >> W;

    int mx = max(Y, W);

    int D = 6 - (mx - 1);

    int ans = __gcd(D, 6);

    cout << D / ans << "/" << 6 / ans << endl;
    return 0;
}