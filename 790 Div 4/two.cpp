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
        int n,m;
        cin>>n>>m;
        cin.ignore();

        vector<string>v_str;

        for(int i=0; i<n; i++)
        {
            string s;
            cin>>s;
            v_str.push_back(s);
        }

        sort(v_str.begin(),v_str.end());
        int sum=0,min_cost=INT_MAX;

        for(int i=0; i<(v_str.size()-1); i++)
        {
            for(int j=i+1;j<v_str.size();j++)
            {
               string s=v_str[i];
               string s1=v_str[j];
               sum=0;
               for(int k=0;k<m;k++)
               {
                    sum+=abs(s[k]-s1[k]);
               }
               if(min_cost>sum)
               {
                   min_cost=sum;
               }
            }
        }
        cout<<min_cost<<endl;
    }
    return 0;
}

