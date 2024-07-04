#include<iostream>
using namespace std;

int main()
{
    string p;
    cin>>p;
    int flag=0;
    for (int i=0; i<p.size(); i++)
    {  
        if(p[i]=='H' || p[i]=='Q' || p[i]=='9')
        {
            cout<<"YES"<<endl;
            flag = 1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"NO"<<endl;
    }
    return 0;
}