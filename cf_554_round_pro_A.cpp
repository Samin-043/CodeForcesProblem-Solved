#include<bits/stdc++.h>

int main()
{

    long long int a;
    long long int b;
    long long int c;
    long long int d[10000];
    long long int e[10000];


    while((scanf("%lld %lld",&a,&b))!=EOF)
    {

        c=0;

        for(int i=0; i<a; i++)
        {

            scanf("%lld",&d[i]);


        }

        for(int j=0; j<b; j++)
        {

            scanf("%lld",&e[j]);



        }

        if(a>b)
        {
            for(int j=0,i=0; j<b; i++,j++)
            {

                if((d[i]+e[j])%2!=0)
                    c++;


            }
        }

        if(a<b)
        {
            for(int i=0,j=0; i<a; i++,j++)
            {

                if((d[i]+e[j])%2!=0)
                    c++;


            }
        }


        if(c<=b)
        {
            printf("%lld\n",c);
        }




    }


    return 0;
}
