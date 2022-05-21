#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int i,t;
    scanf("%d",&t);
    char a[105],b[105],c[105];
    while(t--)
    {
        scanf("%s%s%s",a,b,c);
        int len,x;
        //i=0;
        len=strlen(b);
        x=0;
        i=0;
        while(i<len)
        {
            if(a[i]==c[i]||b[i]==c[i])
            {
                x++;
            }
            i++;
        }
        if(x==len)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
        printf("\n");
    }
    return 0;
}

