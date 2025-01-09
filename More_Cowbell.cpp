#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    int maxi=arr[n-1];
    int pa=n-k;
    if(k>=n)
    {
        cout<<maxi;
        return 0;
    }
    int l=(pa*2)-1;
    for(int i=0;i<=l/2;++i)
    {
        maxi=max(maxi,arr[i]+arr[l-i]);
    }
    for(int i=l+1;i<n;++i)
    {
        maxi=max(maxi,arr[i]);
    }
    cout<<maxi;
    return 0;
} 