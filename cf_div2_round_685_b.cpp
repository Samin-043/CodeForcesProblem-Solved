#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        cin.ignore();
        string s;
        cin>>s;
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            l--;
            r--;
            //cout<<l<<" "<<r<<endl;
            int flag=0;
            for(int i=r+1; i<n; i++)
            {
                if(s[i]==s[r])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                for(int j=l-1; j>=0; j--)
                {
                    //cout<<s[j]<<endl;
                    if(s[j]==s[l])
                    {
                        flag=1;
                        break;
                    }
                }
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
        }
    }
    return 0;
}
