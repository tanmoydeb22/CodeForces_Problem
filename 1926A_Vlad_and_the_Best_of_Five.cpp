#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
     
    string s;

    for (int j = 0; j < t; j++)
    {
        int a=0, b=0;
        cin>>s;
        for(int i=0 ; i<5 ; i++)
      {
        if(s[i]=='A')
        {
            a++;
        }
        else
        {
            b++;
        }
      }
        if(a>b)
        {
        cout<<"A"<<endl;
        }
        else
        {
        cout<<"B"<<endl;
        }
    }
    return 0;
}