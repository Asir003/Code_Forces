#include <bits/stdc++.h>
using namespace std;
#define FL(i,a,b) for (int i = a; i < b; i++)
int main()
{
    int a,b;
    cin>>a>>b;
    int arr[a];
    int count=0;
    FL(i,0,a)
    {
        cin>>arr[i];
    }
    int max=arr[b-1];
    FL(i,0,a)
    {
        if(arr[i]>0 && arr[i]>=max)
        {
            count++;
        }
        else
        {
            continue;
        }
    }
    cout<<count<<endl;
    return 0;
}