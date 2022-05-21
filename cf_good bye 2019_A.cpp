#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k1,k2,a[105],b[105];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&n,&k1,&k2);
        int sum1,sum2,i;
        sum1=sum2=0;
        for(i=0;i<k1;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<k2;i++)
        {
            scanf("%d",&b[i]);
        }
        sort(a,a+k1-1);
        sort(b,b+k2-1);
        if(a[k1-1]>=b[k2-1])
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
