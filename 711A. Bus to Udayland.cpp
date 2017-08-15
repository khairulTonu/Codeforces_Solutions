#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1001][1001];
    int i,j,k,l,n,p=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        for(j=0; j<5; j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<5; j++)
        {
            if(a[i][0]=='O'&&a[i][1]=='O')
            {
                p++;
                a[i][0]='+';
                a[i][1]='+';
                break;
            }
            else if(a[i][3]=='O'&&a[i][4]=='O')
            {
                p++;
                a[i][3]='+';
                a[i][4]='+';
                break;

            }
        }
        if(p>0)
        {
            break;
        }
    }

    if(p==0)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES"<<endl;
        for(i=0; i<n; i++)
        {
            for(j=0; j<5; j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }

    }

}
