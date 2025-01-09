#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main()
{
    int arr[4];
    int arr1[3];
    FLI(i,0,4)
    {
        cin>>arr[i];
    }
    sort(arr,arr+4,[](int a,int b){return a>b ;});
    FLI(i,1,4)
    {
        arr1[i-1]=arr[0]-arr[i];
    }
    FLI(i,0,3)
    {
        cout<<arr1[i]<<" ";
    }
    return 0;
}