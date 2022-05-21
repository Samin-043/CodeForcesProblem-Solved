#include<bits/stdc++.h>
int main()
{
    int n;
    scanf("%d",&n);

    unsigned long long int a,b,c,r;

    while(n--)
    {
        scanf("%llu%llu%llu",&a,&b,&c);

        r=(a+b+c)/2;

        printf("%llu\n",r);


    }

    return 0;
}
