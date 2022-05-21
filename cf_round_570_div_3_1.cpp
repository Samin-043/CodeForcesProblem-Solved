#include<bits/stdc++.h>
int main()
{
    int i,j,num,sum,m;

    scanf("%d",&num);

    for(i=num;; i++)
    {
        sum=0;

        j=i;

        while(j!=0)
        {
            m=j%10;
            sum+=m;
            j/=10;

        }

        if(sum%4==0)
        {
            printf("%d\n",i);
            break;

        }


    }


    return 0;
}
