#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool has7(ll x) {
    while (x >= 1) {
        if (x % 10 == 7)
        {
            return true;
        } 
        x /= 10;
    }
    return false;
}

bool possible(ll n, int r) {
    ll A = n - r;
    int numbers[20] = {0};
    int len = 0;
    if (A == 0) 
    {
        numbers[len++] = 0;
    } 
    else 
    {
        while (A > 0) 
        {
            numbers[len++] = A % 10;
            A /= 10;
        }
    }
    int L = max(len, 12);
    const int mxCarry = 40;
    int dp[32][42] = {0}, next_dp[32][42] = {0};
    dp[r][0] = 1;

    for (int positive = 0; positive < L; positive++) 
    {
        for (int i = 0; i <= r; i++)
        {
            for (int j = 0; j < mxCarry; j++)
            {
                next_dp[i][j] = 0;
            }
        }
        int d = (positive < len ? numbers[positive] : 0);

        for (int remm = 0; remm <= r; remm++) 
        {
            for (int carry = 0; carry < mxCarry; carry++) 
            {
                int msk = dp[remm][carry];
                if (msk == 0) 
                {
                    continue;
                }
                for (int add = 0; add <= remm; add++) 
                {
                    int total = d + carry + add;
                    int new_number = total % 10;
                    int new_carry = total / 10;

                    if (new_carry >= mxCarry)
                    {
                        continue;
                    }
                    int new_remm = remm - add;
                    int new_msk = msk;

                    if (new_number == 7)
                    {
                        new_msk |= 2;
                    }
                    next_dp[new_remm][new_carry] |= new_msk;
                }
            }
        }
        for (int i = 0; i <= r; i++)
        {
            for (int j = 0; j < mxCarry; j++)
            {
                dp[i][j] = next_dp[i][j];
            }
        }
    }
    return (dp[0][0] & 2) != 0;
}

int main() {
    int t;
    cin >> t;

    while (t--) 
    {
        ll n;
        cin >> n;

        if (has7(n)) 
        {
            cout << 0 << endl;
            continue;
        }
        int ans = -1;

        for (int r = 1; r <= 30; r++) 
        {
            if (possible(n, r)) 
            {
                ans = r;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}