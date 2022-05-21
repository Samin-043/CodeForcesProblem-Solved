#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        cin>>s;
        bool ck=false;
        ll pos1=0;
        ll pos=s.size();
        for(int i=0;i<s.size();i++)
        {
            if((s[i]=='2')||(s[i]=='5')||(s[i]=='7')||(s[i]=='0'))
            {

                for(int j=(s.size()-1);j>i;j--)
                {
                    if(s[i]=='2'&&s[j]=='5')
                    {
                        pos1=i;
                        pos=j;

                    }
                    else if(s[i]=='5'&&s[j]=='0')
                    {
                        pos1=i;
                        pos=j;

                    }
                    else if(s[i]=='7'&&s[j]=='5')
                    {
                        pos1=i;
                        pos=j;

                    }
                    else if(s[i]=='0'&&s[j]=='0')
                    {
                        pos1=i;
                        pos=j;

                    }
                }
            }
        }
        int l=(s.size()-1);

        if((pos-pos1)>1)
        {
            cout<<abs(pos-l)+(pos-pos1)-1;
        }
        else
        {
            cout<<abs(pos-l);
        }
        cout<<endl;

    }

    return 0;
}

