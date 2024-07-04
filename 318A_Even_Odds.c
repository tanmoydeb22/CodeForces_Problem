#include<stdio.h>

int main()
{
    long long  n, k, x;
    scanf("%lld %lld", &n, &k);

    long long int ans;

    if(n%2==0)
    {
        x=n/2;
    }
    else
    {
        x=(n+1)/2;
    }
    if(k<=x)
    {
        ans=k*2-1;
    }
    else
    {
        ans=(k-x)*2;
    }

    printf("%lld", ans);


    return 0;
}