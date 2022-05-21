#include<bits/stdc++.h>
int main()
{
    int n,l,h;
    long long int max_sum,min_sum;
    long long int i;

    scanf("%d",&n);

    scanf("%d %d",&l,&h);

    i=0;
    min_sum=max_sum=0;

    while(i<n)
    {
        if(l!=0)
        {
            l--;
        }

        min_sum+=(pow(2,l));

        if(i<h)
        {
            max_sum+=(pow(2,i));
        }

        else
        {
            max_sum+=(pow(2,h-1));
        }

        i++;

    }

    printf("%lld %lld\n",min_sum,max_sum);


    return 0;
}
