#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,n,i,arr[5],t;
    scanf("%lld",&t);
    while(t--)
    {
        for(i=0; i<3; i++)
        {
            scanf("%lld",&arr[i]);
        }
        scanf("%lld",&n);
        sort(arr,arr+3);
        x=2*arr[2]-arr[1]-arr[0];
        if(n<x)
        {
            printf("No");
        }
        printf("\n");
    }
    return 0;
}
