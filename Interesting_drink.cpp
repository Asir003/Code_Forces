#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int find(int arr[],int k,int l)
{
    int low=0;
    int high=l;
    while(low<high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]<=k)
        {
            low=mid+1;
        }
        else
        {
            high =mid;
        }
        
    }
    return low;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    FLI(i,0,n)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int k;
    cin>>k;
    int arr1[k];
    int arr2[k];
    FLI(i,0,k)
    {
        cin>>arr1[i];
    }
    //cout<<endl;
    FLI(i,0,k)
    {
        int count=find(arr,arr1[i],n);
        cout<<count<<endl;
        //arr2[i]=count;
    }
    //cout<<endl;
    //FLI(i,0,k)
    //{
        //cout<<arr2[k]<<endl;
    //}
    return 0;
}