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
        int arr[26]={0};
        string ch="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        bool ck=false;

        for(int i=0;i<s.size();i++)
        {
            for(int j=0;j<ch.size();j++)
            {
                if(s[i]==ch[j])
                {
                    if(arr[j]==0)
                    {
                        arr[j]=1;
                    }
                    else
                    {
                        if(i>0)
                        {
                            if(s[i-1]==s[i])
                            {
                                continue;
                            }
                            else
                            {
                                ck=true;
                            }
                        }
                    }
                }
            }
            if(ck==true)
            {
                break;
            }
        }

        if(ck==false)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }

        cout<<endl;
    }
    return 0;
}
