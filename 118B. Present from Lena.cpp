#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,cnt=1,f=0;
    cin>>n;
    for(i=0; i<=n; i++)
    {
        cnt=1;
        for(j=n*2-2*i; j>=1; j--)
        {

            cout<<" ";
        }
        f=0;
        for(k=1; k<=2*i+1; k++)
        {
            if(k==1)
            {
                cout<<"0";
            }
            else if(k==2*i+1)
            {
                cout<<" 0";
            }
            else
            {

                while(cnt<=i-1&&f==0)
                {

                    cout<<" "<<cnt;
                    cnt++;
                }
                f++;
                cout<<" "<<cnt;
                if(cnt<1)
                {
                    break;
                }
                cnt--;


            }

        }
        cout<<"\n";
    }
    for(i=n-1; i>=0; i--)
    {
        cnt=1;
        for(j=n*2-2*i; j>=1; j--)
        {

            cout<<" ";
        }
        f=0;
        for(k=1; k<=2*i+1; k++)
        {

            if(k==1)
            {
                cout<<"0";
            }
            else if(k==2*i+1)
            {
                cout<<" 0";
            }
            else
            {

                while(cnt<=i-1&&f==0)
                {

                    cout<<" "<<cnt;
                    cnt++;
                }
                f++;
                cout<<" "<<cnt;
                if(cnt<1)
                {
                    break;
                }
                cnt--;
            }

        }
        cout<<"\n";
    }
}
