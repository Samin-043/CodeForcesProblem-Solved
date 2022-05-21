#include<bits/stdc++.h>

int main()
{
    int n;

    scanf("%d",&n);

    long long int s;

    while(n--)
    {
        scanf("%lld",&s);

        long long int a[100000];
        long long int i,j,r,s2,s1;

        s1=0;
        s2=0;

        for(j=0; j<s; j++)
        {
            scanf("%lld",&a[j]);

            if(a[j]%2==0)
            {
                s1+=a[j];
            }
            else
            {
                s2+=a[j];

            }

        }

        if(s1>=0&&s2>=0)
        {
            if(s1>s2)
            {
                r=s1-s2;

            }

            else
            {
                r=s2-s1;

            }

        }

        if(r>=s)
        {

            r=r/s;

            if(r==1||r==2)
            {
                printf("%lld\n",r);
            }
            else
            {
                printf("0\n");

            }

        }

        else if(r<=2)
        {
            printf("%lld\n",r);
        }



    }

    return 0;

}
