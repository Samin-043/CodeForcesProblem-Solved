#include<bits/stdc++.h>
int main()
{
    int n;

    scanf("%d",&n);

    int a[n];

    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }

    int c;
    c=1;
    int flag,m;

    flag=m=0;

    for(int i=2; i<=n; i++)
    {
        if(n==2)
        {
            if(a[1]>a[2])
            {
                printf("1\n");
                printf("1");
            }
            else
            {
                m=1;
            }

            break;
        }

        else if(a[1]/2==a[i])
        {
            c++;
        }

        else if(a[1]==a[i]/2)
        {
            c=1;
            flag=1;
            break;

        }

        else
        {
            flag=1;
        }


    }

    if(c>1)
    {
        printf("%d\n",c);
        printf("1 ");
    }

    else if(flag==1||m==1)
    {
        printf("0\n");
    }

    for(int i=2; i<=n; i++)
    {
        if(c==1)
        {
            break;
        }

        else if(a[1]/2==a[i])
        {
            printf("%d ",i);

        }

    }

    printf("\n");


}
