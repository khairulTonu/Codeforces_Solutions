#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100][100],i,j,k,l,n,f,p;
    vector<int>v,v1;
    cin>>n;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    if(n==1)
    {
        cout<<"Yes";
        return 0;
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            p=a[i][j];
            if(p!=1)
            {
                for(l=0; l<n; l++)
                {
                    if(p>a[i][l]&&a[i][l]!=1)
                    {
                        v.push_back(a[i][l]);
                    }
                    if(p>a[l][j]&&a[l][j]!=1)
                    {
                        v1.push_back(a[l][j]);
                    }

                }

                for(k=0; k<v.size(); k++)
                {
                    //cout<<v[k]<<endl;

                    if(binary_search(v1.begin(),v1.end(),p-v[k]))
                    {

                        cout<<"Yes";
                        //cout<<v[k]<<" "<<p-v[k]<<endl;
                        return 0;
                    }
                }

                v.clear();
                v1.clear();


            }

        }

    }
    cout<<"No";
}
