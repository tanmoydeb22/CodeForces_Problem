#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    int max=0;
    int min=101;
    int x, y;
    for (int i=1; i<=n; i++)
    {
        cin>>arr[i];
        if(arr[i]>max)
        {
            max=arr[i];
            x=i;
        }
        if(arr[i]<=min)
        {
            min=arr[i];
            y=i;
        }
    }
    int ans=(x-1)+(n-y);
    if(x<y)
    {
        cout<<ans<<endl;
    }
    else
    {
        cout<<ans-1<<endl;
    }
    return 0;
}