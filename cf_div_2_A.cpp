#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    char a[105],b[105],c[105];
    while(t--)
    {
        scanf("%s%s%s",a,b,c);
        int len;
        //i=0;
        len=strlen(b);
        if(b[0]==c[0])
        {
            if(b[len-1]==c[len-1])
            {
                printf("YES");
            }
        }
        else
        {
            printf("NO");
        }
        printf("\n");
    }
    return 0;
}

