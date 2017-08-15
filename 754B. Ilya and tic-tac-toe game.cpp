#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[10][10];
    int i,j,k,l,cntr=0,cntdr=0,cntc=0,cntdc=0,cntdia=0,cntddia=0;
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=4; j++)
        {
            cin>>a[i][j];
        }
    }
    /*for(i=1; i<=4; i++)
    {
        cntr=0;
        cntdr=0;
        cntc=0;
        cntdc=0;
        for(j=1; j<=4; j++)
        {
            if(a[i][j]=='x'||a[i][j]=='.')
            {
                cntr++;
                if(a[i][j]=='.')
                {
                    cntdr++;
                }
                if(cntr==3&&cntdr==1)
                {
                    cout<<"YES";
                    return 0;
                }
                if(cntdr>1)
                {
                    cntr=0;
                    cntdr=0;
                }
            }
            else
            {
                cntr=0;
            }
        }
        for(k=1; k<=4; k++)
        {
            if(a[k][i]=='x'||a[k][i]=='.')
            {
                cntc++;
                if(a[k][i]=='.')
                {
                    cntdc++;
                }
                if(cntc==3&&cntdc==1)
                {
                    cout<<"YES";
                    return 0;
                }
                if(cntdc>1)
                {
                    cntc=0;
                    cntdc=0;
                }
            }
            else
            {
                cntc=0;
            }
        }
    }
    for(i=1; i<=4; i++)
    {
        //cntdia=0;
        //cntddia=0;
        if(a[i][i]=='x'||a[i][i]=='.')
        {
            cntdia++;
            if(a[i][i]=='.')
            {
                cntddia++;
            }
            if(cntdia==3&&cntddia==1)
            {
                cout<<"YES";
                return 0;
            }
            if(cntddia>1)
            {
                cntdia=0;
                cntddia=0;
            }
        }
        else
        {
            cntdia=0;
        }
    }
    cntdia=0;
    cntddia=0;
    j=4;
    for(i=1; i<=4; i++)
    {

        if(a[i][j]=='x'||a[i][j]=='.')
        {
            cntdia++;
            if(a[i][j]=='.')
            {
                cntddia++;
            }
            if(cntdia==3&&cntddia==1)
            {
                cout<<"YES";
                return 0;
            }
            if(cntddia>1)
            {
                cntdia=0;
                cntddia=0;
            }
        }
        else
        {
            cntdia=0;
        }
        j--;

    }
    cout<<"NO";*/
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=4; j++)
        {
            if(a[i][j]=='.')
            {
                if(a[i][j+1]=='x'&&a[i][j+2]=='x')
                {
                    cout<<"YES";
                    return 0;
                }
                if(j-1>=1)
                {
                    if(a[i][j-1]=='x'&&a[i][j+1]=='x')
                    {
                        cout<<"YES";
                        return 0;
                    }
                }
                if(j-1>=1&&j-2>=1)
                {
                    if(a[i][j-1]=='x'&&a[i][j-2]=='x')
                    {
                        cout<<"YES";
                        return 0;
                    }
                }
                if(a[i+1][j]=='x'&&a[i+2][j]=='x')
                {
                    //cout<<i<<j<<endl;
                    cout<<"YES";
                    return 0;
                }
                if(i-1>=1)
                {
                    if(a[i-1][j]=='x'&&a[i+1][j]=='x')
                    {
                        cout<<"YES";
                        return 0;
                    }
                }
                if(i-1>=1&&i-2>=1)
                {
                    if(a[i-1][j]=='x'&&a[i-2][j]=='x')
                    {
                        cout<<"YES";
                        return 0;
                    }
                }
                if(i-1>=1&&i-2>=1&&j-1>=1&&j-2>=1)
                {
                    if(a[i-1][j-1]=='x'&&a[i-2][j-2]=='x')
                    {
                        cout<<"YES";
                        return 0;
                    }
                }
                if(a[i+1][j+1]=='x'&&a[i+2][j+2]=='x')
                {
                    cout<<"YES";
                    return 0;
                }
                if(i-1>=1&&j-1>=1)
                {
                    if(a[i-1][j-1]=='x'&&a[i+1][j+1]=='x')
                    {
                        cout<<"YES";
                        return 0;
                    }
                }
                if(i-1>=1&&i-2>=1)
                {
                    if(a[i-1][j+1]=='x'&&a[i-2][j+2]=='x')
                    {
                        cout<<"YES";
                        return 0;
                    }
                }
                if(j-1>=1&&i-1>=1)
                {
                    if(a[i-1][j+1]=='x'&&a[i+1][j-1]=='x')
                    {
                        cout<<"YES";
                        return 0;
                    }
                }
                if(j-1>=1&&j-2>=1)
                {
                    if(a[i+1][j-1]=='x'&&a[i+2][j-2]=='x')
                    {
                        cout<<"YES";
                        return 0;
                    }
                }



            }
        }
    }

    cout<<"NO";





}
