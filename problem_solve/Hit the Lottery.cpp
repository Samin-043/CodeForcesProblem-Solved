#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll ct=0;
    while(n>0)
    {
        if(n>=100)
        {
            ct+=(n/100);
            n=n%100;
        }
        else if(n>=20)
        {
            ct+=(n/20);
            n=n%20;
        }
        else if(n>=10)
        {
            ct+=(n/10);
            n=n%10;
        }
        else if(n>=5)
        {
            ct+=(n/5);
            n=n%5;
        }
        else if(n>=1)
        {
            ct+=(n/1);
            n=n%1;
        }
    }

    cout<<ct<<endl;
    return 0;
}
