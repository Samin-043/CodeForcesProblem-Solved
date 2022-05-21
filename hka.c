
/*int n;
int findfact(unsigned long int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(n==1)
            return 1;
        else
            return n*findfact(n-1);
    }

}
int findfact1(unsigned long int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(n==1)
            return 1;
        else
            return n*findfact(n-1);
    }

}
int main()
{

    signed int a,b;
    scanf("%d %d",&a,&b);

    printf("%lu\n",findfact(a)/findfact1(b));
}*/
#include<stdio.h>
int main()
{
    int a,p,c1,c2,x,y,day;
    scanf("%d %d %d %d",&a,&p,&c1,&c2);
    if (c1+c2<p)
    {
        printf("YES, ");
        x=(a+c1+c2)-p;
        y=p-(c1+c2);
        if (x%y==0)
        {
            day=x/y;
        }
        else
        {
            day=x/y;
            day=day+1;
        }

        printf("%d days required",day);
    }
    else
    {
        printf("NO");
    }
    return 0;


}
