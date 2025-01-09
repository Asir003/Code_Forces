#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int main()
{
    int n,b;
    cin>>n;
    int arr[n];
    FLI(i,1,n+1)
    {
        cin>>b;
        arr[b-1]=i;
    }
    FLI(i,0,n)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}