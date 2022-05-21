#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int x=a+c;
        int y=b+d;
        if(x==180&&y==180)
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
