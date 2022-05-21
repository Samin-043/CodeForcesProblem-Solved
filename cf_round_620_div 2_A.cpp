#include<bits/stdc++.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int flag;
        long long int m,x,y,a,b;
        scanf("%lld %lld %lld %lld",&x,&y,&a,&b);
        m=y-x;
        if(m%(a+b)==0)
        {
            m=(y-x)/(a+b);
            printf("%lld",m);
        }
        else if(m%(a+b)!=0)
        {
            printf("-1");
        }
        //printf("%lld %lld %lld %lld",x,y,a,b);
        printf("\n");
    }
    return 0;
}
