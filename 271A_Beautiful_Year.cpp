#include<iostream>
using namespace std;

int main()
{
    int y;
    cin>>y;
    for (int i = y+1; i < 9013; i++)
    {
        int r1 = i % 10;
        int r2 = ( i / 10 ) % 10;
        int r3 = ( i / 100 ) % 10;
        int r4 = ( i / 1000 ) % 10;

        if((r1 != r2) && (r1 != r3) && (r1 != r4)
          && (r2 != r3) && (r2 != r4) && (r3 != r4))
        {
            cout<<i<<endl;
            break;
        }      
    }
    return 0;
}