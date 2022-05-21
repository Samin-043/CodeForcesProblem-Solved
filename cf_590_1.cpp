#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    int n;
    long long int arr[1000],sum;

    while(t--)
    {
        scanf("%d",&n);
        sum=0;
        for(int i=0; i<n; i++)
        {
            scanf("%lld",&arr[i]);
            sum+=arr[i];
        }

        if(sum%n==0)
        {
            sum=sum/n;
        }
        else if(sum%n!=0)
        {
            sum=(sum/n)+1;
        }

        printf("%lld\n",sum);

    }

    return 0;
}
