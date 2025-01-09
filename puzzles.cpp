#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main()
{
    int n,a;
    cin>>n>>a;
    int arr[a];
    FLI(i,0,a)
    {
        cin>>arr[i];
    }
    sort(arr,arr+a);
    int i;
    int max=arr[i+(n-1)]-arr[i];
    FLI(i,0,a-n+1)
    {
        int k=arr[i+(n-1)]-arr[i];
        if(k<max)
        {
            max=k;
        }
    }
    cout<<max;
    return 0;
}