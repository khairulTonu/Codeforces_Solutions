

#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    int x,i,j,k,l,cnt=0;
    cin>>x;
    string binary = bitset<64>(x).to_string();
    for(i=0;i<binary.size();i++)
    {
        if(binary[i]=='1')
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}

