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
        string s1;
        cin>>s1;
        int ind=30;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='a')
            {
                ind=i;
            }
        }
        int flag=0;
        if(ind>0&&ind<26)
        {

            for(int i=ind; i<s.size(); i++)
            {
                char c=s[ind]+1;
                if(s[i-1]==c||s[i+1]==c)
                {
                    continue;
                }
                else
                {
                    flag=1;
                    break;
                }
            }
        }



        cout<<endl;

    }
    return 0;
}

