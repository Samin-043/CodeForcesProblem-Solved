#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,b1[1000],b2[1000];
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>b1[i]>>b2[i];
    }
    int c=0,j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if((b1[i]==b2[j])&&(i!=j))
            {
                    c++;
                    break;
            }
        }
    }

    cout<<n-c<<endl;

    return 0;
}
