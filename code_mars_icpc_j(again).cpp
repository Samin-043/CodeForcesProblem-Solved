#include<bits/stdc++.h>
using namespace std;

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

        sort(arr,arr+n);

        long long int ans=arr[0]*arr[n-1];

        printf("Case %d: %lld\n",cnt,ans);

    }

    return 0;
}
