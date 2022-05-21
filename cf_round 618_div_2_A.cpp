#include<bits/stdc++.h>
int main()
{
    int t,n,arr[10000],i,sum,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        sum=c=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]==0)
            {
                arr[i]+=1;
                c++;
            }
            sum+=arr[i];
        }
        if(sum==0)
        {
            sum+=1;
            c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
