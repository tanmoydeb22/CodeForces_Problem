#include<iostream>
using namespace std ;
int main ()
{
   string str;
   cin>>str;
   int num=0;
   for(int i=0;i<str.size();i++)
   {
       if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B')
       {
           i+=2;

          if(num!=0)
          {
            cout<<" ";
          }
          num=0;
       }
       else
       {
           num++;
           cout<<str[i];
       }
   }
}

