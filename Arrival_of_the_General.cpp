#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int main()
{
    int n;
    cin>>n;
    int arr[n];
    FLI(i,0,n)
    {
        cin>>arr[i];
    }
    int max=arr[0];
    int m=0;
    int min=arr[0];
    int mi=0;
    FLI(i,0,n)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            m=i;
        }
        if(arr[i]<=min)
        {
            min=arr[i];
            mi=i;
        }
    }

    int valuema=(n-1)-m;
    int valuema1=(n-1)-valuema;
    int valuemi=(n-1)-mi;
    if(mi<m)
    {
        int ans1=(valuema1+valuemi)-1;
        cout<<ans1;
    }
    else
    {
        cout<<(valuema1+valuemi);
    }
    return 0;
}