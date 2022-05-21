#include<bits/stdc++.h>
#include<string.h>
using namespace std;


int binary_to_decimal(char s[])
{
    int dec_value=0;

    int base=1;

    int len=strlen(s);

    for(int i=len-1; i>=0; i--)
    {
        if(s[i]=='1')
        {
            dec_value+=base;
        }

        base=base*2;

    }

    return dec_value;

}

int main()
{

    char s[1000];

    scanf("%s",s);

    //printf("%d",binary_to_decimal(s));

    int num=binary_to_decimal(s);

    int four,c;

    c=0;

    for(int i=0; i<num; i++)
    {
        four=pow(4,i);
        if(four>=num)
            break;

        c++;

    }

    printf("%d\n",c);

    return 0;

}
