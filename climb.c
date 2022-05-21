#include<stdio.h>
int main()
{
    int a,b,c,d,n1,n2;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    n1=a*b;
    n2=a*(c+d);
    if(n1<n2)
        printf("NO\n");
    else
        printf("YES, %d days required\n",(n1-n2)/10);

    return 0;
}
