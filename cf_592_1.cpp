#include<bits/stdc++.h>
int main()
{
    long long int l,r,num,rem;
    int c1,c2,c3,c4,c5,c6,c7,c8,c9,c10;
    long long int i;
    int flag=0;

    scanf("%lld %lld",&l,&r);

    for(i=l; i<=r; i++)
    {
        num=i;

        c1=c2=c3=c4=c5=c6=c7=c8=c9=c10=0;
        while(num!=0)
        {
            rem=num%10;
            switch(rem)
            {
            case 1:
                c1++;
                break;
            case 2:
                c2++;
                break;
            case 3:
                c3++;
                break;
            case 4:
                c4++;
                break;
            case 5:
                c5++;
                break;
            case 6:
                c6++;
                break;
            case 7:
                c7++;
                break;
            case 8:
                c8++;
                break;
            case 9:
                c9++;
                break;
            case 0:
                c10++;
                break;

            }
            num=num/10;
        }

        if(c1>1||c2>1||c3>1||c4>1||c5>1||c6>1||c7>1||c8>1||c9>1||c10>1)
        {
            continue;
        }
        else
        {
            printf("%lld\n",i);
            flag=1;
            break;
        }
    }

    if(flag==0)
    {
        printf("-1\n");
    }

    return 0;
}
