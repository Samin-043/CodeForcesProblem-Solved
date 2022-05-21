#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        cin.ignore();
        string s;
        getline(cin,s);
        ll last_index_zero=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                last_index_zero=i;
            }
        }

        for(int i=0;i<n;)
        {
            if(s[i]=='1')
            {
                if(i<last_index_zero)
                {
                    i=last_index_zero;
                }
                else
                {
                    cout<<s[i];
                    i++;
                }
            }
            else
            {
                cout<<s[i];
                i++;
            }
        }
        cout<<endl;
    }
    return 0;
}
