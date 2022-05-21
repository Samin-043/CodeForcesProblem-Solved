#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n,b;
    int a;

    while((scanf("%llu",&n))!=EOF)
    {

        int m,a;

        if(n>0&&n<4)
        {
            printf("NO\n");

        }

        else
        {
            a=1;
            n=n-(3*a);

            if(n%2==0)
            {
                b=n/2;

                printf("%d %llu\n",a,b);

            }

            else
            {
                printf("NO\n");

            }


        }

    }

    return 0;

}
