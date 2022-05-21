#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,arr[55];
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int ct=0;
        for(int i=0; i<(n-1); i++)
        {
            //cout<<arr[i]<<" "<<arr[i+1]<<endl;
            float x;
            x=(max(arr[i],arr[i+1]))*1.0/(min(arr[i],arr[i+1]));
            if(x<=2.000000)
            {
                continue;
            }
            else
            {
                int mx_e=max(arr[i],arr[i+1]);
                int mi_e=min(arr[i],arr[i+1]);
                while(1)
                {
                    float comp;
                    comp=(mx_e*1.0)/mi_e;
                    if(comp<=2.000000)
                    {
                        break;
                        //continue;
                    }
                    mi_e=mi_e*2;
                    //cout<<mx_e<<" "<<mi_e<<endl;
                    ct++;
                }
            }
        }
        cout<<ct<<endl;
    }
    return 0;
}
