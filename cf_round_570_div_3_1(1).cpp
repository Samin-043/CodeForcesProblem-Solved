#include<bits/stdc++.h>
int main()
{
    int n,sum;

    scanf("%d",&n);

    int m;

    sum=0;

    while(n!=0)
    {
        m=n%10;

        sum+=m;

        n=n/10;


    }

    printf("%d\n",sum);



    return 0;
}
