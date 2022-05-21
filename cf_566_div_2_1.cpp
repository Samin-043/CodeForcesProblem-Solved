#include<bits/stdc++.h>
int main()
{

    int n,r;

    while((scanf("%d",&n))!=EOF)
    {

        r=n*3;

        if(r%4!=0)
        {
            printf("0\n");

        }

        if(r%4==0)
        {

            printf("%d\n",n);

        }



    }

}
