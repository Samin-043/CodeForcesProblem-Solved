#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cout<<endl;
        int a2,a1;
        int b2,b1;
        int f2,f1;
        cin>>a2>>a1>>b2>>b1>>f2>>f1;
        if(a2==b2&&b2==f2)
        {
            if((f1>a1&&f1<b1)||(f1>b1&&f1<a1))
            {
                cout<<(abs(a1-b1))+2;
            }
            else
            {
                cout<<abs(a1-b1);
            }
        }
        else if(a2==b2)
        {
            cout<<(abs(a1-b1));
        }
        else if(a1==b1&&b1==f1)
        {
            if((f2>a2&&f2<b2)||(f2>b2&&f2<a2))
            {
                cout<<(abs(a2-b2))+2;
            }
            else
            {
                cout<<(abs(a2-b2));
            }
        }
        else if(a1==b1)
        {
            cout<<(abs(a2-b2));
        }
        else
        {
            cout<<(abs(a2-b2))+(abs(a1-b1));
        }
    }
    return 0;
}
