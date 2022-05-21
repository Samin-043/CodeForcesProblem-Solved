#include<bits/stdc++.h>
int main()
{

    char a[100];
    int n,i,m;


    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {

        scanf("%s",&a[i]);

    }

    for(i=1;i<=n;i++)
    {

        if(a[i]=='A'||a[i]=='C'||a[i]=='T'||a[i]=='G')
        {

            printf("%d\n",i);


        }

    }


    return 0;

}
