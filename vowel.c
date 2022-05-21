#include<stdio.h>
#include<string.h>

char * removeVowels(char * s)
{
    int i,l,c;

    l=strlen(s);
    c=l;
    int flag;
    flag=0;
    int j;

    for(i=0; i<l; i++)
    {

        if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u')
        {
            for(j=i; j<c; j++)
            {
                s[j]=s[j+1];

            }

            c--;

            break;


        }


    }

    return s;


}


int main()
{

    char s[100],d[100];




    return 0;

}
