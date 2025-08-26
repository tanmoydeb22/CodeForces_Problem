/*********************************************|
|         This is me Tanmoy Deb.......        |
|*********************************************/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string ori;
    cin>>ori;

    string passLock;
    cin>>passLock;

    int moves = 0;
    for (int i = 0; i < n; i++)
    {
        if(ori[i] > passLock[i])
        {
            int x = abs(ori[i]-passLock[i]);
            int y = abs(ori[i]-(passLock[i]+10));

            moves += min(x, y);
        }
        else
        {
            int x = abs(passLock[i]-ori[i]);
            int y = abs(passLock[i]-(ori[i]+10));

            moves += min(x, y);
        }
    }
    cout<<moves<<endl;
    return 0;
}