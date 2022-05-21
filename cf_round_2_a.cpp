#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int prime_check(ll n)
{
    int flag=0;
    for(int i=2;i<=(n/2);i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    return flag;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n==1)
        {
            cout<<"0";
        }
        else if(n==2)
        {
            cout<<"1";
        }
        else if(n==3)
        {
            cout<<"2";
        }
        else if(n>1&&n%2==1)
        {
            cout<<"3";
            //int x=prime_check(n);
        }
        else if(n>2&&n%2==0)
        {
            cout<<"2";
        }
        cout<<endl;
    }
    return 0;
}
