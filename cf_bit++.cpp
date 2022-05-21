#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c;
    char s[4];
    cin>>n;
    c=0;
    while(n--)
    {
        cin>>s;
        if(s[1]=='+')
        {
            c++;
        }
        else if(s[1]=='-')
        {
            c--;
        }
    }
    cout<<c<<endl;

    return 0;
}
