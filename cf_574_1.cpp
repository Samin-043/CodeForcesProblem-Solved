#include<bits/stdc++.h>
int main()
{
    int n,k;
    int a[1005];

    scanf("%d %d",&n,&k);

    for(int i=0; i<n; i++)
    {

        //scanf("%d",&a[i]);

        a[i]=rand()%1000+1;

    }

    int c,sum;
    c=sum=0;

    for(int i=0; i<n; i++)
    {

        if(a[i]%2==1)
        {

            sum+=1;

        }

        else
        {
            sum+=a[i];

        }


        if(sum>=n)
        {
            break;

        }

    }

    printf("%d\n",sum);

    return 0;

}
