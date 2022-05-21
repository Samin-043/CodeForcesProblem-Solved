#include<bits/stdc++.h>
int prime_num(long long int num)
{
    int flag=0,m,n;
    n=0;
    for(int i=2; i<num/2; i++)
    {
        if(num%i==0)
        {
            flag=1;
            m=1;
            break;
        }
    }
    if(flag==0)
    {
        return n;
    }
    else
    {
        return m;
    }
}
int main()
{
    long long int num,i;
    int flag=1;
    scanf("%lld",&num);
    if(num==2||num==3)
    {
        printf("%lld",num);
    }
    else if(num>3)
    {
        for(i=num;;i++)
        {
            flag=prime_num(i);
            if(flag==0)
            {
                printf("%lld",i);
                break;
            }
        }
    }
    printf("\n");
    return 0;
}
