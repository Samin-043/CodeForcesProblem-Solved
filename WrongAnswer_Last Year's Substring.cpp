#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cin.ignore();
        string s;
        cin>>s;
        bool check=false;
        for(int i=0;i<(n-3);i++)
        {
            if(s[i]=='2')
            {
                if(s[i+1]=='0'&&s[i+2]=='2'&&s[i+3]=='0')
                {
                    check=true;
                    break;
                }
                //cout<<"step 1"<<endl;
                if(s[n-3]=='0'&&s[n-2]=='2'&&s[n-1]=='0')
                {
                    check=true;
                    break;
                }
                //cout<<"step 2"<<endl;
                if(s[i+1]=='0'&&s[i+2]=='2'&&s[n-1]=='0')
                {
                    check=true;
                    break;
                }
                //cout<<"step 3"<<endl;
                if(s[i+1]=='0'&&s[n-2]=='2'&&s[n-1]=='0')
                {
                    check=true;
                    break;
                }
                else
                {
                    break;
                }
                //cout<<"step 4"<<endl<<endl;
            }
        }

        if(check==false)
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
