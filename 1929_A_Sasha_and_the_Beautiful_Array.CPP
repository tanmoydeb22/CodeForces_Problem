#include<iostream>
using namespace std;

int main()
{
    int t, n;
    cin>>t;
    int a[100];
    int sum=0;
    for(int i=0; i<t; i++)
   {
    cin>>n;
   for(int j=0; j<n; j++)
   {
       cin>>a[j];
   }
   for(int i=0; i<n; i++)
   {
        for(int j=i+1; j<n; j++)
       {
           if(a[i]>a[j])
           {
               int temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
       }
   }
   for(int i=1; i<n; i++)
   {
        sum += a[i]-a[i-1];
   }
   cout<<sum<<endl;
   sum=0;
   }
    return 0;
}