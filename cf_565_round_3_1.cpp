#include<bits/stdc++.h>

int main()
{

    int test;

    long long int num;

    scanf("%d",&test);

    while(test--)
    {

        long long int c=0;

        scanf("%lld",&num);

        while(num)
        {

            if(num==1)
            {
                break;
            }

            if(num%2==0)
            {
                num=num/2;
                c++;


            }

            else if(num%3==0)
            {
                num=(2*num)/3;
                c++;

            }

            else if(num%5==0)
            {
                num=(num*4)/5;

                c++;


            }

            else
            {
                break;
            }



        }

        if(num!=1)
            c=-1;

        printf("%lld\n",c);

    }


    return 0;

}
