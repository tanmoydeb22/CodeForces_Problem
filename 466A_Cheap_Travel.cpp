#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a, b, sum = 0;
    cin >> n >> m >> a >> b;

    int p = (n / m) * b;
    int q = min((n % m) * a, b);
    
    if (m * a <= b)
    {
        cout << n * a << endl;
    }
    else
    {
        cout << p + q << endl;
    }
    return 0;
}