#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,a,b,c,d;
    cin>>a>>b>>c>>d;
    int sum1=0,sum2=0;
    int e1=0,e2=0;
    if((a%2==0&&b%2==0)&&(d%2!=0&&c%2==0))
    {
        cout<<"-1";
        return 0;
    }
    else if((c%2==0&&d%2==0)&&(b%2!=0&&a%2==0))
    {
        cout<<"-1";
        return 0;
    }

    for(i=0 ;i<5000; i++)
    {
        //cout<<sum1;
        sum1=(b+i*a);
        for(j=0; sum2<=sum1; j++)
        {
            sum2=(d+j*c);
            if(sum1==sum2)
            {
                cout<<sum1;
                return 0;
            }
        }

        //cout<<sum1<<" "<<sum2<<endl;

    }
    cout<<"-1";



}
