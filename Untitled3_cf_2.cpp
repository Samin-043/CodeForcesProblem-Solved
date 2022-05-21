#include<bits/stdc++.h>
int main()
{
    int n,l,r;

    while((scanf("%d%d%d",&n,&l,&r))!=EOF)

    {
        int min_sum,max_sum;

    min_sum=max_sum=0;

    for(int i=1; i<=n; i++)
    {
        min_sum+=pow(1,i);

        if(i==n)
        {

            {
                min_sum+=2;
            }
        }

        else if(r%2!=0)
        {
            int a=i-1;
            max_sum+=pow(2,a);
        }

        else if(r%2==0)
        {
            max_sum+=2;

            if(i==n)
            {
                max_sum+=1;
            }
        }



    }

    printf("%d %d\n",min_sum,max_sum);


    }

    return 0;
}
