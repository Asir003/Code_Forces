#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int main()
{
    int arr[4];
    int count=0;
    FLI(i,0,4)
    {
        cin>>arr[i];
    }
    FLI(i,0,4)
    {
        FLJ(j,i+1,4)
        {
            if(arr[i]==arr[j])
            {
                count++;
                break;
            }
        }
    }
    cout<<count;
    return 0;
}