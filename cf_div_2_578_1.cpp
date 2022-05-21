#include<bits/stdc++.h>
#include<string.h>

int main()
{
    char s[11]={'0','0','0','0','0','0','0','0','0','0','\0'};

    long long int n;

    scanf("%lld",&n);

    char a[n];


    scanf("%s",a);

    long long int c,d;

    c=0;
    d=9;
    int flag,sum1,sum2,flag_1;

    flag=flag_1=sum1=0;
    sum2=0;

    for(int i=1;i<=n;i++)
    {
        if(a[i]=='0'||a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4')
        {
            c=a[i];
            s[c]='0';
            flag=1;

        }


        else if(a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9')
        {
            d=a[i];
            s[d]='0';
            flag_1=1;

        }

        else if(a[i]=='R')
        {
            if(flag_1==1)
            {
                s[d]='1';

            }

            else
            {
                s[sum2]='1';
                d--;
                sum2=d;
            }

        }

        else if(a[i]=='L')
        {

            if(flag==1)
            {
                s[c]='1';

            }

            else
            {
                s[sum1]='1';
                c++;
                sum1=c;

            }

        }


    }

    printf("%s",s);


    return 0;
}
