#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cin.ignore();
        vector<char>v;
        vector<char>final_v;
        for(int i=0;i<(n-2);i++)
        {
            string s;
            cin>>s;
            v.push_back(s[0]);
            v.push_back(s[1]);
        }
        final_v.push_back(v[0]);
        int len_s=v.size();
        for(int i=1;i<(len_s-1);i++)
        {
            if(final_v.size()==n)
            {
                break;
            }
            if(v[i]==v[i+1])
            {
                final_v.push_back(v[i]);
                i++;
            }
            else
            {
                final_v.push_back(v[i]);
                final_v.push_back(v[i+1]);
                i++;
            }
        }
        int l=final_v.size();
        //cout<<l<<" "<<v[len_s-1]<<endl;
        if(l<n)
        {
            final_v.push_back(v[len_s-1]);
            l=final_v.size();
            if(l<n)
            {
                final_v.push_back(v[len_s-1]);
            }
        }

        for(int i=0;i<final_v.size();i++)
        {
            cout<<final_v[i];
        }
        cout<<endl;
    }
    return 0;
}

