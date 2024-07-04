#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        char a[8][8];
        char ans[64];
        int cnt = -1;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin>>a[i][j];
                if(a[i][j] >= 'a' && a[i][j] <= 'z')
                {
                    cnt++;
                    ans[cnt]=a[i][j];
                }
            }
        }
        for (int i = 0; i <= cnt ; i++)
        {
            cout<<ans[i];
        }
        cout<<endl;
    }
    return 0;
}