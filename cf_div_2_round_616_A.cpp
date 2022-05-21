#include<bits/stdc++.h>
int main()
{
    long long int sum,i,t,n,arr[100000],arr1[100000];
    scanf("%lld",&t);
    while(t--)
    {
        int flag;
        scanf("%lld",&n);
        sum=0;
        flag=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
            /*sum+=arr[i];
            if(sum>0&&sum%2==0)
            {
                flag=1;
                break;
            }*/
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]%2!=0)
            {
                sum+=arr[i];
            }
        }
        if(flag==1)
        {
            printf("%lld",sum);
        }
        else
        {
            printf("-1");
        }
        printf("\n");
    }
    return 0;
}
