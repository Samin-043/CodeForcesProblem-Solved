#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll len=s.size();
        bool ck=false;
        for(int i=0; i<s.size(); i++)
        {
            int num=s[i]-'0';
            if(num%2==0)
            {
                ck=true;
                break;
            }
        }

        if(ck==true)
        {
            int value=(s[len-1]-'0');
            int value1=(s[0]-'0');
            if(value%2==0)
            {
                cout<<"0";
            }
            else if(value1%2==0)
            {
                cout<<"1";
            }
            else
            {
                cout<<"2";
            }
            //cout<<value<<endl;
        }
        else
        {
            cout<<"-1";
        }
        cout<<endl;
    }
    return 0;
}

