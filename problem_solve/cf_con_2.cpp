#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        cin>>s;
        int arr[26]={0};
        //vector<char>v_strl;
        for(int i=0; i<s.size(); i++)
        {
            int ind=s[i]-'a';
            arr[ind]++;
        }
        int o=0;
        int t=0;
        for(int i=0; i<26; i++)
        {
            if(arr[i]>1)
            {
                t++;
            }
            else if(arr[i]==1)
            {
                o++;
            }
            //cout<<arr[i]<<" ";
        }
        o=(o/2)+t;
        cout<<o<<endl;
    }
    return 0;
}

