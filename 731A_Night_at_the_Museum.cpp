#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int cnt;
    cnt = min(abs('a'-s[0]), 26 - abs(s[0]-'a'));
    for (int i = 1; i < s.size(); i++)
    {
        cnt += min(abs(s[i]-s[i-1]), 26 - abs(s[i-1]-s[i]));
    }
    cout<<cnt<<endl;
    return 0;
}