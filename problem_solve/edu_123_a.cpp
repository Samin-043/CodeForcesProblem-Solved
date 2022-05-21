#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        cin>>s;
        int r=0,g=0,b=0;
        bool ck=false;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='r')
            {
                r=1;
                continue;
            }
            if(s[i]=='g')
            {
                g=1;
                continue;
            }
            if(s[i]=='b')
            {
                b=1;
                continue;
            }
            if(s[i]=='R'&&r==1)
            {
                ck=true;
                continue;
            }
            if(s[i]=='G'&&g==1)
            {
                ck=true;
                continue;
            }
            if(s[i]=='B'&&b==1)
            {
                ck=true;
            }
            else
            {
                ck=false;
                break;
            }
        }
        if(ck==false)
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES";
        }
        cout<<endl;
    }
    return 0;
}
