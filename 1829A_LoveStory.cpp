#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    string s1="codeforces";
    string s2;
    
    for (int i=0; i<t; i++)
    {
        cin>>s2;
        int count=0;
        for (int j=0; j<s2.size(); j++)
        {
            if(s1[j]!=s2[j])
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}