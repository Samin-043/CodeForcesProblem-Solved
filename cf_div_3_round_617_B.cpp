#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int s,a,m,n,sum;
        cin>>s;
        sum=s;
        while(s>9)
        {
            m=s%10;
            n=s/10;
            sum+=n;
            s=m+n;
        }
        cout<<sum<<endl;
    }

}
