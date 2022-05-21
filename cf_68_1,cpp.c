#include<bits/stdc++.h>
int main()
{
    int n;

    scanf("%d",&n);
    long long int size;
    long long int a[size];
    long long int i,j,r,s2,s1;

    for(i=0; i<n; i++)
    {
        scanf("%lld",&size);

        s1=0;
        s2=0;

        for(j=0; j<size; j++)
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

        if(r>=size)
        {
            r=r/size;
            printf("%lld\n",r);

        }

        else
        {
            printf("%lld\n",r);
        }



    }


    return 0;
}
