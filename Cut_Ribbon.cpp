#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main()
{
    int arr[4];
    FLI(i,0,4)
    {
        cin>>arr[i];
    }
    sort(arr,arr+4);
    int count=0;
    FLI(i,0,2)
    {
        FLJ(j,i+1,3)
        {
            if(arr[i]+arr[j]==arr[3])
            {
                //cout<<arr[i]+arr[j]<<endl;
                count++;
                break;
            }
        }
    }
    cout<<count+1;
    return 0;
}