#include<bits/stdc++.h>
int main()
{
    long long int t,n,k,res,a,b;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&k);
        long long int sum;
        res=n/k;
        sum=res*k;
        a=n%k;
        b=k/2;
        if(a>=b)
        {
            sum+=b;
        }
        else if(a<b)
        {
            sum+=a;
        }
        printf("%lld\n",sum);
    }

    return 0;
}
