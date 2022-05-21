#include<bits/stdc++.h>
int main()
{

    int m[100],n[100];

    int n1,n2;
    int a,b;

    scanf("%d",&n1);

    for(int i=0;i<n1;i++)
    {
        scanf("%d",&m[i]);
    }

    a=m[0];

    for(int i=0;i<n1;i++)
    {
        if(m[i]>a)
        {
            a=m[i];

        }
    }

    scanf("%d",&n2);

    for(int i=0;i<n2;i++)
    {
        scanf("%d",&n[i]);
    }

    b=n[0];

    for(int i=0;i<n2;i++)
    {
        if(n[i]>b)
        {
            b=n[i];

        }
    }

    printf("%d %d\n",a,b);


    return 0;

}
