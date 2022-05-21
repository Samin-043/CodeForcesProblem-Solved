#include<bits/stdc++.h>
using namespace std;
char str[10^18];
int main()
{
    cin>>str;
    int i,c;
    for(i=0,c=0;str[i]!='\0';i++)
    {
        //cout<<str[i];
        if(str[i]=='4'||str[i]=='7')
        {
            c++;
        }
    }
    if(c==4||c==7)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    cout<<endl;

    return 0;
}
