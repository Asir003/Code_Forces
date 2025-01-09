#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int main()
{
    int a;
    cin>>a;
    int arr[a];
    FLI(i,0,a)
    {
       cin>>arr[i];
    }
    sort(arr,arr+a);
    FLI(i,0,a)
    {
       cout<<arr[i]<<" ";
    }
    return 0;
}