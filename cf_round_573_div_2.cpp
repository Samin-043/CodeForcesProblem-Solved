#include<bits/stdc++.h>
int main()
{
    int n;

    int check,i,m,a,b,flag;

    while((scanf("%d",&n))!=EOF)
    {
        flag=0;
        check=n;

        for(i=0; i<=2; i++)
        {
            n=check+i;
            a=n%4;

            if(a==1)
            {
                flag=1;
                b=i;
                break;

            }

            else if(a==3)
            {
                b=i;
                flag=0;

            }

        }

        if(flag==1)
        {
            printf("%d A\n",b);

        }

        else
        {
            printf("%d B\n",b);

        }

    }
    return 0;

}
