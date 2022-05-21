#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,len;
    char s[105];
    scanf("%d",&t);
    while(t--)
    {
        int i,flag,c,x,z;
        scanf("%d",&len);
        scanf("%s",s);
        c=flag=z=0;
        for(i=0;i<len;i++)
        {
            if(s[i]=='A')
            {
                flag=1;
                c=0;
            }
            else if(flag==1)
            {
                c++;
                if(c>z)
                {
                    z=c;
                }
            }
        }
        printf("%d\n",z);
    }
    return 0;
}
