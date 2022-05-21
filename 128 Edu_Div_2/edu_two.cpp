#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        cin.ignore();
        char carr[10][10];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>carr[i][j];
            }
        }
        int first_pos=10;
        int after_pos=10;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(carr[i][j]=='R'&&first_pos==10)
                {
                    first_pos=j;
                }
                else
                {
                    if(carr[i][j]=='R')
                    {
                        after_pos=min(after_pos,j);
                    }
                }
                //cout<<carr[i][j]<<" ";
            }
        }

        if(after_pos<first_pos)
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
