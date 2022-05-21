
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{

    char s[1000];
    scanf("%s",s);
    int len=strlen(s);
    int x,ans,c;

    x=len-1;
    c=0;

    for(int i=0;i<len;i++)
    {
        if(s[i]=='1')
        {
            c++;
        }
    }

    if(c==0)
    {
        ans=0;
    }

    else if(c==1)
    {
        if(x%2==0)
        {
            ans=x/2;
        }
        else
        {
            ans=(x/2)+1;
        }

    }

    else if(c>1)
    {
        ans=(x/2)+1;
    }

    printf("%d\n",ans);

    return 0;

}
