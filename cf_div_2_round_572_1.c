#include<stdio.h>

int main()
{

    int i,n;

    scanf("%d",&n);
     int s[n];

    for(i=0;i<n;i++)
    {
        scanf("%1d",&s[i]);
    }

    int c,d;

    c=d=0;

    for(i=0;i<n;i++)
    {
        if(s[i]==1)
        {
            c++;

        }

        else
        {
            d++;

        }

    }

    if(c!=d)
    {
        printf("%d\n",1);

        for(i=0;i<n;i++)
        {
            printf("%d",s[i]);

        }

    }

    else
    {

        printf("%d\n",2);
        printf("%d ",s[0]);
        for(i=1;i<n;i++)
        {
            printf("%d",s[i]);

        }
    }

    printf("\n");

    return 0;

}

