#include<bits/stdc++.h>
int main()
{
    int t;
    long long int r,g,b;
    scanf("%d",&t);
    long long int res;
    while(t--)
    {
        scanf("%lld %lld %lld",&r,&g,&b);
        if(r==b||r==g||b==g||b==r||g==r||g==b)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
        printf("\n");
    }
    return 0;
}
