#include<bits/stdc++.h>
int main()
{
    int te;
    long long int i,str,in,fr;
    scanf("%d",&te);

    while(te--)
    {
        scanf("%lld %lld %lld",&str,&in,&fr);
        long long int x,c,y;
        x=str+fr;
        y=in;
        c=0;

        if(x<y)
        {

            while(x<y)
            {
                c++;
                x=x+1;
                y=y-1;

            }

        }

        else
        {

            while(x>y)
            {
                c++;
                y=y+1;
                x=x-1;
            }

        }


        printf("%lld\n",c);


    }

    return 0;
}
