#include<stdio.h>
int main()
{
    int w;
    scanf("%d",&w);
    if(w>0)
    {
        if(w%2!=0)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
