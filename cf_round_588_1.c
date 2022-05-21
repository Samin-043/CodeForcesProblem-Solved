#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int sum;
    sum=a+b+c+d;
    if((a+b==c+d)||(a+c==b+d)||(a+d==c+b))
    {
        printf("YES\n");
    }
    else if((a==b+c+d)||(b==a+c+d)||(c==b+a+d)||(d==a+b+c))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
