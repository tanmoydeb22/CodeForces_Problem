#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    char mat[n][m];
    int flag=0;
    for(int i=0 ; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>mat[i][j];
        }  
    }
    for(int i=0 ; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
           if(mat[i][j]=='C'||mat[i][j]=='M'||mat[i][j]=='Y')
            {
                flag=1;
                break;
            }
        } 
    }
    if(flag==1)
    {
        cout<<"#Color"<<endl;
    }
    else
    {
        cout<<"#Black&White"<<endl;
    }
    return 0;
}