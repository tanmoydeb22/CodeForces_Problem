/*********************************************|
|         This is me Tanmoy Deb.......        |
|*********************************************/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>> n>> m;

    if(n<m)
    {
        cout<<"-1"<<endl;
    }
    else if(n == m)
    {
        cout<<n<<endl;
    }
    else
    {
        int one;
        int two;

        if(n%2 == 0)
        {
            two = n/2;
            one = 0;
        }
        else
        {
            two = n / 2;
            one = 1;
        }
        while( two>=0 && ((one+two) % m != 0) )
        {
            one += 2;
            two--;
        }
        if((one+two)%m == 0)
        {
            cout<<one+two<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}