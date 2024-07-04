#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    char s1[100];
    char s2[100];
    gets(s1);
    gets(s2);

    strlwr(s1);
    strlwr(s2);

    int flag = strcmp(s1, s2);

    if (flag > 0)
        cout << 1 << endl;
    else if (flag < 0)
        cout << -1 << endl;
    else
        cout << 0 << endl;
    return 0;
}