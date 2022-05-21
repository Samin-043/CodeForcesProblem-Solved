#include<bits/stdc++.h>
#include<string.h>

int main()
{
    int n;
    char s[105];
    while((scanf("%d",&n))!=EOF)
    {

        int c;

        c=0;

        for(int i=0; i<n; i++)
        {
            scanf("%s",&s[i]);

        }

        for(int i=0; i<n; i++)
        {

            if(s[i]=='+')
            {
                c++;
            }

            else if((c>=1)&&(s[i]=='-'))
            {
                c--;

            }


        }

        printf("%d\n",c);

    }

    return 0;

}

