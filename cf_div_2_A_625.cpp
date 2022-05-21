#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,arr[105],arr1[105];
    long long int sum;
    cin>>t;
    while(t--)
    {
        int n,k,x,y;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];

        }
        int flag=0;
        int p=0;
        sum=0;
        for(int i=0; i<n; i++)
        {
            //cin>>arr[i];
            if(arr[i]%2==0)
            {
                printf("1\n");
                printf("%d",i+1);
                flag=1;
                break;
            }
            else
            {
                sum+=arr[i];
                p++;
                //l.push_back(i+1);
                arr1[p]=i+1;
                if(sum%2==0)
                {
                    cout<<"2"<<endl;
                    for(int b=1; b<=2; b++)
                    {
                        cout<<arr1[b]<<" ";
                    }
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
        {
            cout<<"-1";
        }

        cout<<endl;
    }
    return 0;
}
