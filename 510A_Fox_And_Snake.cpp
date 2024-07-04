#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    char mat[n][m];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            if(i%2==0)
            {
                mat[i][j]='#';                
            }
            else if(i%2!=0)
            {
               mat[i][j]='.';
            }
        }
    }
    for (int i=3; i<n; i+=4)
    {
               mat[i][0]='#';
    }
    for (int i=1; i<n; i+=4)
    {
               mat[i][m-1]='#';
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            if(i%2==0)
            {
                cout<<mat[i][j];               
            }
            else
            {
                cout<<mat[i][j];
            }
        }
        cout<<endl;
    }
    return 0;
}
