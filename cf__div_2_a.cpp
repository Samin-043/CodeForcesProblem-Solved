#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
/*ll num(string s)
{
    ll n=0;
    for(int i=0;s[i]!='\0';i++)
    {
        n=n*10+s[i]-'0';
    }
    return n;
}*/
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        cin.ignore();
        string s;
        getline(cin,s);
        int arr[100005],brr[100005],k=0,l=0,m=0;
        if(s[0]=='1')
        {   arr[k]=1;
            k++;
            brr[m]=2;
            m++;
        }
        else
        {
            arr[k]=1;
            k++;
            brr[m]=1;
            m++;
        }
        for(int i=1; i<n; i++)
        {
            if(s[i]=='0')
            {
                l=m-1;
                if(brr[l]==1)
                {
                    arr[k]=0;
                    k++;
                    brr[m]=0;
                    m++;
                }
                else
                {
                    arr[k]=1;
                    k++;
                    brr[m]=1;
                    m++;
                }
            }
            else if(s[i]=='1')
            {
                l=m-1;
                if(brr[l]==1)
                {
                    arr[k]=1;
                    k++;
                    brr[m]=2;
                    m++;
                }
                else if(brr[l]==2)
                {
                    arr[k]=0;
                    k++;
                    brr[m]=1;
                    m++;
                }
                else
                {
                    arr[k]=1;
                    k++;
                    brr[m]=2;
                    m++;
                }
            }
        }
        for(int i=0; i<k; i++)
        {
            cout<<arr[i];
        }
        cout<<endl;
        //ll value=num(s);
        //cout<<value<<endl;
    }
    return 0;
}
