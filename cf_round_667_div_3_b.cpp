#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;
        ll A=a,B=b,X=x,Y=y,N=n;
        if(((b-y)+(a-x))<=n)
        {
            cout<<x*y<<endl;
        }
        else
        {
            ll ans_m=0;
            if(a>=b)
            {
                ll p=b-y;
                //cout<<"first p :"<<p<<endl;
                if(n>=p)
                {
                    n=n-p;
                    //cout<<"n :"<<n<<endl;
                    b=b-p;
                    //cout<<"b :"<<b<<endl;
                }
                else
                {
                    b=b-n;
                    n=0;
                }
                ll q=a-x;
                //cout<<"q value : "<<q<<endl;
                if(n>0)
                {
                    a=abs(a-n);
                    // cout<<a<<endl;
                    if(a<x)
                    {
                        a+=q;
                        //cout<<"a+=q : "<<a<<endl;
                    }
                    ans_m=a*b;
                }
                else
                {
                    ans_m=a*b;
                }

                //if(A>=B)
                //{
                    a=A;
                    b=B;
                    x=X;
                    y=Y;
                    n=N;
                    p=a-x;
                   // cout<<"first p :"<<p<<endl;
                    if(n>=p)
                    {
                        n=n-p;
                        //cout<<"n :"<<n<<endl;
                        a=a-p;
                        //cout<<"b :"<<b<<endl;
                    }
                    else
                    {
                        a=a-n;
                        n=0;
                    }
                    q=b-y;
                    //cout<<"q value : "<<q<<endl;
                    if(n>0)
                    {
                        b=abs(b-n);
                        //cout<<a<<endl;
                        if(b<y)
                        {
                            b+=q;
                            //cout<<"a+=q : "<<a<<endl;
                        }
                        ans_m=min(ans_m,a*b);
                    }
                    else
                    {
                        ans_m=min(ans_m,a*b);
                    }
               // }

                cout<<ans_m;
            }

            else
            {
                ll p=a-x;
                //cout<<"first p :"<<p<<endl;
                if(n>=p)
                {
                    n=n-p;
                    //cout<<"n :"<<n<<endl;
                    a=a-p;
                    //cout<<"b :"<<b<<endl;
                }
                else
                {
                    a=a-n;
                    n=0;
                }
                ll q=b-y;
                //cout<<"q value : "<<q<<endl;
                if(n>0)
                {
                    b=abs(b-n);
                    //cout<<a<<endl;
                    if(b<y)
                    {
                        b+=q;
                        //cout<<"a+=q : "<<a<<endl;
                    }
                    ans_m=a*b;
                }
                else
                {
                    ans_m=a*b;
                }

                //if(B>=a)
                //{
                    a=A;
                    b=B;
                    x=X;
                    y=Y;
                    n=N;
                    p=b-y;
                    //cout<<"first p :"<<p<<endl;
                    if(n>=p)
                    {
                        n=n-p;
                        //cout<<"n :"<<n<<endl;
                        b=b-p;
                        //cout<<"b :"<<b<<endl;
                    }
                    else
                    {
                        b=b-n;
                        n=0;
                    }
                    q=a-x;
                    //cout<<"q value : "<<q<<endl;
                    if(n>0)
                    {
                        a=abs(a-n);
                        // cout<<a<<endl;
                        if(a<x)
                        {
                            a+=q;
                            //cout<<"a+=q : "<<a<<endl;
                        }
                        ans_m=min(ans_m,a*b);
                    }
                    else
                    {
                        ans_m=min(ans_m,a*b);
                    }
               // }

                cout<<ans_m;
            }
            cout<<endl;
        }
    }
    return 0;
}
