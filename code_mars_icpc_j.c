#include<stdio.h>
int main()
{
    long long int s,n;
    int cnt=0;
    int t;

    scanf("%d",&t);

    while(t--)
    {
        cnt++;
        scanf("%lld",&n);
        long long int arr[n];
        for(int i=0; i<n; i++)
        {
            scanf("%lld",&arr[i]);

        }



        /*if(n==1)
        {
            printf("Case %d: %lld\n",cnt,arr[0]*arr[0]);
        }
        else
        {
            s=1;
            for(int i=0; i<n; i++)
            {
                s=s*arr[i];
            }

            printf("Case %d: %lld\n",cnt,s);
        }*/

    }

    return 0;
}
