#include<bits/stdc++.h>
#include<string.h>

int main()
{
    int n,m;

    char s[1000];
    int a[1000];

    scanf("%d %d",&n,&m);

    for(int i=0; i<n; i++)
    {
        scanf("%s",s);

    }
    int sum;
    sum=0;

    for(int i=0; i<m; i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }

    int r;

    if(m==n)
    {
        printf("%d\n",sum);

    }

    else
    {
        sum+=m;
        sum+=n;

        printf("%d\n",sum);

    }






    return 0;
}
