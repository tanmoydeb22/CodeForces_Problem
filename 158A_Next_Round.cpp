#include<iostream>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;

    int ar[n];
    int count=0;

    for (int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    for(int i=0; i<n; i++)
    {
        if((ar[i]>=ar[k-1]) && (ar[i]>0))
        {  
           count++;
        }
        else
        {
            break;
        }
    }
    cout<<count<<endl;
   return 0;
}