#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,sum,arr[10000];
    char s[100000];
    int flag;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        flag=1;
        for(int i=0; i<n; i++)
        {
            scanf("%s",s);
            int j,d;
            j=d=0;

            while(s[j]!='\0')
            {
                d=d*10+s[j]-'0';
                arr[i]=d;
                j++;
            }
            //printf("%d ",arr[i]);

        }

        sort(arr,arr+n);
        sum=0;
        for(int k=n-1; k>=0; k--)
        {
            //printf("%d ",arr[k]);
            if(arr[k]<=2048)
            {
                sum+=arr[k];
            }

            if(sum>=2048)
            {
                printf("YES\n");
                flag=0;
                break;
            }

        }

        if(flag==1)
        {
            printf("NO\n");
        }

    }

    return 0;

}
