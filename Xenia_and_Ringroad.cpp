#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main()
{
    long long a,b;
    cin>>a>>b;
    int arr[b];
    FLI(i,0,b)
    {
        cin>>arr[i];
    }
    long long sum=arr[0];
    
    FLI(i,0,b-1)
    {
        if(arr[i]<=arr[i+1])
        {
            long long l=arr[i+1]-arr[i];
            sum=sum+l;
            
        }
        else
        {
            long long k=a-arr[i];
            sum=sum+k+arr[i+1];
            
        }

    }
    cout<<sum-1;
    return 0;
}