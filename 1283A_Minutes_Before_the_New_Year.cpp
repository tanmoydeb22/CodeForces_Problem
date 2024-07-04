#include<iostream>
using namespace std;

int main()
{
   int t;
   cin>>t;

   int h, m;
   for (int i=0; i<t; i++)
   {
      cin>>h>>m;
      int ans=(23-h)*60+(60-m);
      cout<<ans<<endl;
   }
    //return 0;
}