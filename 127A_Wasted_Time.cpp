/*********************************************|
|         This is me Tanmoy Deb.......        |
|*********************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    double distance = 0;
    for (int i = 1; i < n; i++)
    {
        int dx = v[i].first - v[i - 1].first;
        int dy = v[i].second - v[i - 1].second;
        distance += sqrt(dx * dx + dy * dy);
    }
    cout << fixed << setprecision(9) << distance * (k / 50.0) << endl;

    return 0;
}