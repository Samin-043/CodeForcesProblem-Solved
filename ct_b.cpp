#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define size 10^9
ll gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

ll findGCD(ll arr[],ll n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);

        if(result == 1)
        {
            return 1;
        }
    }
    return result;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll l,r,k;
        //ll arr[size];
        cin>>l>>r>>k;
        ll arr[size]={0};
        ll ind=0;
        ll prod=l;
        //ll last_ind=l;
        bool ck=false;
        while(k>0)
        {
            l++;
            prod=prod*l;
            k--;
            ck=true;
        }
        if(ck==true)
        {
            l++;
        }
        for(int m=l;m<=r;m++)
        {
            arr[ind]=m;
            ind++;
        }
        if(ck==true)
        {
            arr[ind]=prod;
            ind++;
        }
        /*for(int i=0;i<ind;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;*/
        ll res=findGCD(arr,ind);
        if(res>1)
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
