#include<bits/stdc++.h>
long long int arr[2*10^5];
int main()
{
    long long int i,t,n,s1,s2,diff;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        diff=s1=s2=0;
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&arr[i]);
            s1+=arr[i];
        }
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&arr[i]);
            s2+=arr[i];
        }
        s1=s1/n;
        s2=s2/n;
        if(s1>s2)
        {
            diff=s1-s2;
            printf("%lld\n",diff);
        }
        else
        {
            diff=s2-s1;
            printf("%lld\n",diff);
        }
    }
    return 0;
}
