#include<stdio.h>
int main()
{
    long long int n,i,r,num;

    while((scanf("%lld",&n))!=EOF)
    {
       r=0;

       for(i=0;i<n;i++)
       {
           scanf("%lld",&num);

           if(num%2==0&&num%3==0&&num%5!=0)
           {
               r++;
           }

       }

       printf("%lld\n",r);


    }

    return 0;
}
