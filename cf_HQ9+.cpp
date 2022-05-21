#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[105];
    cin>>s;
    int i,flag;
    i=flag=0;
    while(s[i]!='\0')
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
        {
            flag=1;
            //cout<<"YES";
            break;
        }
        i++;
    }
    if(flag==1)
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
