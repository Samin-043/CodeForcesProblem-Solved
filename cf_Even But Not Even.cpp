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
        int len;
        cin>>len;
        string s;
        cin>>s;
        //ll sum=0;
        vector<int>v;
        for(int i=0; i<s.size(); i++)
        {
            int num=s[i]-'0';
            if(num%2==1)
            {
                v.push_back(num);
                if(v.size()==2)
                {
                    break;
                }
            }
        }

        if(v.size()==2)
        {
            cout<<v[0]<<v[1];
        }
        else
        {
            cout<<"-1";
        }
        cout<<endl;

    }
    return 0;
}

