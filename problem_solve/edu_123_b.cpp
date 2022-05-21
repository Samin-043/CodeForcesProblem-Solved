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
        vector<int>v;
        for(int i=n; i>=1; i--)
        {
            v.push_back(i);
        }

        for(int i=1; i<=n; i++)
        {
            for(int k=0; k<v.size(); k++)
            {
                cout<<v[k]<<" ";
            }
            cout<<endl;
            for(int j=0; j<v.size(); j++)
            {
                if(v[j]==1)
                {
                    swap(v[j],v[j-1]);
                }
            }
        }
    }
    return 0;
}
