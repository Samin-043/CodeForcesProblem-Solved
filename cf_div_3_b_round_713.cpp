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
        char c[405][405];
        int r1=0,r2=0,c1=0,c2=0;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                cin>>c[i][j];
                if(c[i][j]=='*')
                {
                    if(r1==0&&c1==0)
                    {
                        r1=i;
                        c1=j;
                    }
                    else
                    {
                        r2=i;
                        c2=j;
                    }
                }
            }
        }
        //cout<<r1<<" "<<c1<<endl;
        //cout<<r2<<" "<<c2<<endl;
        int r3=0,r4=0,c3=0,c4=0;

        if(r1==r2)
        {
            if(r1==1)
            {
                r3=r1+1;
                c3=c1;
                r4=r2+1;
                c4=c2;
            }
            else
            {
                r3=r1-1;
                c3=c1;
                r4=r2-1;
                c4=c2;
            }
        }
        else if(c1==c2)
        {
            if(c1==1)
            {
                r3=r1;
                c3=c1+1;
                r4=r2;
                c4=c2+1;
            }
            else
            {
                r3=r1;
                c3=c1-1;
                r4=r2;
                c4=c2-1;
            }
        }

        else
        {
            r3=r1;
            c3=c2;
            r4=r2;
            c4=c1;
        }


        cin.ignore();
        //cout<<endl;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(i==r3&&j==c3)
                {
                    cout<<"*";
                }
                else if(i==r4&&j==c4)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<c[i][j];
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
