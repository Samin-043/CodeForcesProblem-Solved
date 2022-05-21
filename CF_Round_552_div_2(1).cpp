#include<bits/stdc++.h>

int main()
{
    long int n;
    long int t;

    long int a[10^5];
    long int b[10^5];
    long int m;
    long int k=1;
    long int l;
    long int p;

    long int i;


    while((scanf("%li %li",&n,&t))!=EOF)
    {

        for(i=1; i<=n; i++)
        {


            scanf("%li",&a[i]);

            scanf("%li",&b[i]);


        }


        for(i=1,t; i<=n; i++)
        {

            k=1;
            l=0;

            if(a[i+1]==a[i])
            {

                k=a[i]*n;
                l=k;

                l+=b[i];

                if(l>=t)
                {
                    m=i;
                    break;


                }
            }

            if(a[i]>=t)
            {

                m=i;
                break;

            }


        }

        printf("%li\n",m);

    }

    return 0;
}
