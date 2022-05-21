#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
        int t_len=(2*n)-1;
        for(int i=0;i<t_len;i=i+2)
        {
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
