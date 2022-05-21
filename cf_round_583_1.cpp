#include<bits/stdc++.h>
int main()
{
    char s[10000];
    long long int n;

    scanf("%lld",&n);

    for(int i=0; i<=n; i++)
    {
        scanf("%c",&s[i]);

    }

    //printf("%s\n",s);

    int i=0,c1,c2,c3,c4,c5,m;
    while(s[i]!='\0')
    {
        c1=c2=c3=c4=c5=m=0;
        if(s[i]=='o')
        {
            c1++;
        }
        else if(s[i]=='n')
        {
            c2++;
        }
        else if(s[i]=='e')
        {
            c3++;
        }
        else if(s[i]=='z')
        {
            c4++;
            m=c4;
        }
        else if(s[i]=='r')
        {
            c5++;
        }

        for(int i=0; i<=c2-1; i++)
        {
            printf("1 ");
        }

        if(m==c5)
        {
            for(int i=0; i<=c5-1; i++)
            {
                printf("0 ");
            }

        }

        i++;
    }
    printf("\n");

    return 0;
}
