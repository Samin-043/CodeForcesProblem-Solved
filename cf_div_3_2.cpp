#include<bits/stdc++.h>
#include<stdlib.h>

int main()
{

    unsigned long long int n,len,seg;

    scanf("%llu",&n);

    while(n--)
    {

        unsigned long long int a[10^5],i,c,c1;

        scanf("%llu%llu",&len,&seg);

        int flag;

        c=flag=0;
        c1=0;

        for(i=0; i<len; i++)
        {
            scanf("%llu",&a[i]);

            if(a[i]%2!=0)
            {
                c++;

            }

            if(c==seg)
            {
                flag=1;
                break;
            }


        }


        if(flag==0)
        {
            printf("NO\n");
        }

        else
        {
            printf("YES\n");

            for(i=0; i<len; i++)
            {
                if(a[i]%2!=0)
                {
                    c1++;
                    printf("%llu ",i+1);

                    if(c1==c)
                    {
                        break;

                    }


                }
            }

            printf("\n");


        }

    }

    return 0;
}
