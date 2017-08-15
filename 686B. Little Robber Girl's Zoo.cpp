#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int arr[105];


    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = n-1; i>0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                printf("%d %d\n", j + 1, j + 2);
            }
        }
    }

    return 0;
}
