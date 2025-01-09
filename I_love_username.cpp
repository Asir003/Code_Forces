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
    int min=arr[0]; 
    int count=0;
    FLI(i,1,n)
    {
        if(arr[i]>max)
        {
            count++;
            max=arr[i];
        }
        if(arr[i]<min)
        {
            count++;
            min=arr[i];
        }
    }
    cout<<count;
    return 0;
}