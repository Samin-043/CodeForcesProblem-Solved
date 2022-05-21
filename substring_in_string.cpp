#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    char s[1000],sub[1000];

    int pos,len;

    gets(s);

    int i;

    printf("Enter length and position : ");

    scanf("%d%d",&len,&pos);

    for(i=0; i<len; i++)
    {
        sub[i]=s[pos+i-1];

    }

    sub[i]='\0';

    printf("%s\n",sub);



    return 0;

}

