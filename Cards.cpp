#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll str_size;
    cin>>str_size;
    cin.ignore();
    string s;
    cin>>s;
    ll n=0,z=0,o=0,e=0,r=0;
    for(int i=0;i<str_size;i++)
    {
        if(s[i]=='n')
        {
            n++;
        }
        else if(s[i]=='z')
        {
            z++;
        }
        else if(s[i]=='o')
        {
            o++;
        }
        else if(s[i]=='e')
        {
            e++;
        }
        else if(s[i]=='r')
        {
            r++;
        }
    }
    //cout<<"n "<<n<<"z "<<z<<"o "<<o<<"e "<<e<<"r "<<r<<endl;
    bool ok=false;
    while(ok==false)
    {
        if(o>0&&n>0&&e>0)
        {
            cout<<"1 ";
            o--;
            n--;
            e--;
        }
        else if(z>0&&e>0&&r>0&&o>0)
        {
            cout<<"0 ";
            z--;
            e--;
            r--;
            o--;
        }
        else
        {
            ok=true;
        }
    }

    cout<<endl;
    return 0;
}
