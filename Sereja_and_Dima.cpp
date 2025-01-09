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
    int i=0;
    int j=n-1;
    int l=1;
    int sum=0;
    int sam=0;
    while(i<=j)
    {
        int k=arr[i]>arr[j] ? (arr[i]-0) :(arr[j]-0);
        if(l%2==0)
        {
            sam+=k;
            if(arr[i]>arr[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        else
        {
           sum+=k;
            if(arr[i]>arr[j])
            {
                i++;
            }
            else
            {
                j--;
            } 
        }
        l++;
    }
    
    
    cout<<sum<<" "<<sam;
    return 0;
}