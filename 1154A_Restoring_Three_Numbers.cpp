#include<iostream>
using namespace std;

int main()
{
    int x[4];
    int max=0;
    for (int i=0; i<4; i++)
    {
        cin>>x[i];
    }
    for(int i=0; i<4; i++)
   {
        for(int j=i+1; j<4; j++)
       {
           if(x[i]>x[j])
           {
               int temp=x[i];
               x[i]=x[j];
               x[j]=temp;
           }
       }
   }
    int a, b, c;
    a = x[3] - x[0];
    b = x[3] - x[1];
    c = x[3] - x[2];
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}