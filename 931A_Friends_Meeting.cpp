/*********************************************|
|         This is me Tanmoy Deb.......        |
|*********************************************/

#include <bits/stdc++.h>
using namespace std;


int fibonacci(int n) {
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    return n + fibonacci(n - 2);
}

int main() {
    int a, b;
    cin >> a >> b;;

    int n = abs(a-b);
    if(n%2!=0) // odd
    {
        cout << fibonacci(n) << " ";
    }
    else // even
    {
        cout << fibonacci(n) << " ";
    }
    cout << endl;

    return 0;
}
