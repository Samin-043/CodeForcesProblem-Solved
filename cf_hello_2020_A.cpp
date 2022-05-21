#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int n,m,i;
    char s1[105][105];
    char s2[105][105];
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {
        scanf("%s",s1[i]);
    }
    for(i=1;i<=m;i++)
    {
        scanf("%s",s2[i]);
    }
    long long int q,y,l1,l2;
    scanf("%lld",&q);
    while(q--)
    {
        scanf("%lld",&y);
        if(y>n)
        {
            l1=y%n;
        }
        else
        {
            l1=y;
        }
        if(y>m)
        {
            l2=y%m;
        }
        else
        {
            l2=y;
        }
        if(l1==0)
        {
            l1=n;
        }
        if(l2==0)
        {
            l2=m;
        }
        //printf("%lld %lld\n",l1,l2);
        printf("%s%s\n",s1[l1],s2[l2]);
    }
    return 0;
}
