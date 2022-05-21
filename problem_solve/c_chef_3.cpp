#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<string>pro_name;
        vector<string>name;
        string s;
        vector<ll>total;
        for(int i=0; i<(3*n); i++)
        {
            cin>>s;
            ll num;
            cin>>num;
            pro_name.push_back(s);
            name.push_back(s);
            total.push_back(num);
        }
        sort(name.begin(),name.end());
        vector<string>str;
        int l=0;
        vector<ll>res;
        bool ck=false;
        for(int i=1;i<name.size();i++)
        {
            if(name[i]==name[i-1])
            {
                if(ck==false)
                {
                    string cl=name[i];
                    str.push_back(cl);
                }
                ck=true;
            }
            else
            {
                ck=false;
            }
        }



        for(int i=0; i<str.size(); i++)
        {
            ll sum=0;
            string chk="1";
            /*if(pro_name[i]==chk)
            {
                continue;
            }*/
            //else
            //{
                for(int j=0; j<(3*n); j++)
                {
                    if(str[i]==pro_name[j])
                    {
                        sum+=total[j];
                        total[j]=0;
                        pro_name[j]="1";
                    }
                }
                //pro_name[i]="1";
                //cout<<pro_name[i]<<endl;
                if(sum>0)
                {
                    res.push_back(sum);
                }
            //}

            //total[pro_name[i]]++;
        }

        sort(res.begin(),res.end());
        for(int i=0; i<res.size(); i++)
        {
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


