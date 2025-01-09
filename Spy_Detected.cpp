#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
//vector diye sikhte hbe
int find(int arr[],int a)
{
    int max=0;
    FLI(i,0,a)
    {
        if(arr[i]==arr[i+1])
        {
            continue;
        }
        else
        {
            max=i+2;
            if(i==0 && arr[i]!=arr[i+2])
            {
                max--;
            }
            return max;
        }
    }
    return -1;
}
int main()
{
    int n,a;
    cin>>n;
    int arr1[n];
    FLI(i,0,n)
    {
        cin>>a;
        int arr[a];
        FLJ(j,0,a)
        {
            cin>>arr[j];
        }
       arr1[i]=find(arr,a);
        
    }
    FLI(i,0,n)
    {
        cout<<arr1[i]<<endl;
    }
    return 0;
}