#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main()
{
    int n,a;
    cin>>n;
    int arr[n];
    int countj=0;
    int countb=0;
    FLI(i,0,n)
    {
        cin>>arr[i];
    }
    FLI(i,0,n)
    {
        if(arr[i]%2==0)
        {
            countj++;
        }
        else
        {
            countb++;
        }
    }
    if(countj>countb)
    {
        FLI(i,0,n)
        {
            if(arr[i]%2!=0)
            {
                a=i;
            }
        }
    }
    else
    {
        FLI(i,0,n)
        {
            if(arr[i]%2==0)
            {
                a=i;
            }
        }

    }
    cout<<a+1;
    return 0;
}