#include<iostream>
using namespace std;

int main()
{
    string s1;
    string s2;

    cin>>s1;
    cin>>s2;
    
    int x=s2.size()-1, y=0;
    for (int i=0; i<s1.size(); i++)
    {
        if(s1[i]==s2[x])
        {
            x--;
            y++;
        }
    }
    if(y==s1.size())
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}