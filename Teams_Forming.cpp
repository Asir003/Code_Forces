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
    sort(arr,arr+n);
    int sum=0;
    for(int i=0;i<n-1;i+=2)
    {
        if(arr[i]!=arr[i+1])
        {
            sum+=(arr[i+1]-arr[i]);
        }

    }
    cout<<sum<<endl;
    return 0;
}