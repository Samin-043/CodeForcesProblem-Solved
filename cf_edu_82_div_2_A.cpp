#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c,flag,x;
    char s[105];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s);
        int i,j,k;
        i=c=flag=x=0;
        while(s[i]!='\0')
        {
            if(s[i]=='1'&&flag==0)
            {
                flag=1;
            }
            else if(s[i]=='0'&&flag==1)
            {
                c++;
            }
            else if(s[i]=='1'&&flag==1)
            {
                x+=c;
                c=0;
                //flag=0;
            }
            i++;
        }
        printf("%d\n",x);
    }
    return 0;
}
