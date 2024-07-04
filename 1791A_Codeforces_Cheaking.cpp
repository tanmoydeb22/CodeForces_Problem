#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    string s="codeforces";
    while(t--)
    {
        char ch;
        cin>>ch;

        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if(ch==s[i])
            {
                count = 1;
                break;
            }
        }
        if(count==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}