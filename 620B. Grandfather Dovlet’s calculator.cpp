#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={6,2,5,5,4,5,6,3,7,6};
    int a,b,i,j,rem,x,sum=0;
    cin>>a>>b;
    for(i=a;i<=b;i++)
    {
        x=i;
        while(x!=0)
        {
            rem=x%10;
            sum=sum+arr[rem];
            x=x/10;
        }
    }
    cout<<sum;
}
