#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int long long num;
        cin >> num;
        int count = 0;

        if (num % 2050 != 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            num /= 2050;

            while (num != 0)
            {
                count += (num % 10);
                num /= 10;
            }
            cout << count << endl;
        }
    }
    return 0;
}