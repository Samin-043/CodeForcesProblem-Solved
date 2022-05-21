#include<bits/stdc++.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    char s[n];
    scanf("%s",s);
    long long int c,i,x1,x2;
    i=x1=x2=0;
    while(s[i]!='\0')
    {
        if(s[i]=='L')
        {
            x1--;
        }
        if(s[i]=='R')
        {
            x2++;
        }
        i++;
    }
    c=0;
    //printf("%lld %lld\n",x1,x2);
    for(i=x1;i<=x2;i++)
    {
        c++;
    }
    printf("%lld\n",c);
    return 0;
}
