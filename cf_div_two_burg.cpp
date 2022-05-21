#include<bits/stdc++.h>
int main()
{
    int t;
    int a,b,c,z;
    int hem,chick,div_value;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d %d",&a,&b,&c);
        scanf("%d %d",&hem,&chick);

        z=b*2+c*2;

        if(a==1)
            printf("0\n");

        else if(a>=z)
        {
            printf("%d\n",b*hem+c*chick);

        }

        else
        {
            int m,n,p,q;

            m=n=p=q=0;

            if(chick>hem)
            {
                m=c*2;
                p=m;

                if(a>=m)
                {
                    m=c*chick;
                }

                n=((a-p)/2);

                n=n*hem;

                printf("%d\n",m+n);

            }

            else if(chick<hem)
            {
                m=b*2;
                p=m;

                if(a>=m)
                {
                    m=b*hem;
                }

                n=((a-p)/2);

                n=n*chick;

                printf("%d\n",m+n);

            }

        }

    }

    return 0;
}
