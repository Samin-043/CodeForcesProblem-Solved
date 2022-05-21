#include<stdio.h>
#include<string.h>

int main()
{
    char s[100000];

    scanf("%s",s);

    long long int r;
    int flag;

    flag=0;

    int len=strlen(s);
    int m;

    for(r=0;r<len;r++)
    {
        if(s[r]=='x')
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
    {
        printf("Not Safe\n");
    }

    else
    {
        printf("Safe\n");

    }

    return 0;
}
