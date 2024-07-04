#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    int c=0;
    char s[20];
    for (int i=0; i<t; i++)
    {
        cin>>s;
        if(!strcmp(s, "Tetrahedron"))
        {
            c+=4;
        }
        else if(!strcmp(s, "Cube"))
        {
            c+=6;
        }
        else if(!strcmp(s, "Octahedron"))
        {
            c+=8;
        }
        else if(!strcmp(s, "Dodecahedron"))
        {
            c+=12;
        }
        else if(!strcmp(s, "Icosahedron"))
        {
            c+=20;
        }
    }
    cout<<c;
    return 0;
}