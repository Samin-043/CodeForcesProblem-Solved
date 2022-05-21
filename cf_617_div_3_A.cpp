#include<bits/stdc++.h>
int main()
{
    int t,n,i,arr[10000],sum;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            sum+=arr[i];
        }
        if(sum%2!=0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
        printf("\n");
    }
    return 0;
}
