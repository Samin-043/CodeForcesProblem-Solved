#include<bits/stdc++.h>
int main()
{

    long long int x;
    long long int y;
    long long  int z;
    long long int sum;

    while((scanf("%lld %lld %lld %lld",&x,&y,&z,&sum))!=EOF)
    {
        if(sum>x&&sum>y)
        {
            if(sum>z)
            {
                printf("%lld\n",sum-x);

                printf("%lld\n",sum-y);
                printf("%lld\n",sum-z);
            }

        }

        if(x>sum&&x>y)
        {
            if(x>z)
            {
                printf("%lld\n",x-sum);

                printf("%lld\n",x-y);
                printf("%lld\n",x-z);

            }

        }

        if(y>sum&&y>x)
        {
            if(y>z)
            {
                printf("%lld\n",y-sum);

                printf("%lld\n",y-x);
                printf("%lld\n",y-z);

            }

        }

        if(z>sum&&z>x)
        {

            if(z>y)
            {
                printf("%lld\n",z-sum);

                printf("%lld\n",z-y);
                printf("%lld\n",z-x);

            }
        }


    }


     return 0;

}
