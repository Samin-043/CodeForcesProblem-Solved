#include<bits/stdc++.h>
int main()
{

    long long int n,pos;
    int t;

    scanf("%d",&t);

    while(t>0)
    {
        scanf("%lld %lld",&n,&pos);

        long long int v;

        v=2*pos;

        printf("%lld\n",v);

        t--;
    }

    return 0;
}
